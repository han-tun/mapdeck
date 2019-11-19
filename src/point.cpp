#include <Rcpp.h>
#include "mapdeck_defaults.hpp"
#include "layers/layer_colours.hpp"
#include "spatialwidget/spatialwidget.hpp"


Rcpp::List point_defaults( int n ) {
	return Rcpp::List::create(
		_["elevation"] = mapdeck::defaults::default_elevation(n),
		_["fill_colour"] = mapdeck::defaults::default_fill_colour(n),
		_["stroke_colour"] = mapdeck::defaults::default_stroke_colour(n)
	);
}

// Rcpp::List pointcloud_defaults(int n) {
// 	return Rcpp::List::create(
// 		_["fill_colour"] = mapdeck::defaults::default_fill_colour(n)
// 	);
// }

Rcpp::StringVector get_point_legend_colours( std::string layer_name ) {

	Rcpp::StringVector point_legend;

	if( layer_name == "column" || layer_name == "scatterplot" ) {
		point_legend = mapdeck::layer_colours::fill_stroke_legend;
	} else if ( layer_name == "pointcloud" ) {
		point_legend = mapdeck::layer_colours::fill_legend;
	}
	return point_legend;
}

std::unordered_map< std::string, std::string > get_point_colours( std::string layer_name ) {

	std::unordered_map< std::string, std::string > point_colours;

	if( layer_name == "column" || layer_name == "scatterplot" ) {
		point_colours = mapdeck::layer_colours::fill_stroke_colours;
	} else if ( layer_name == "pointcloud" ) {
		point_colours = mapdeck::layer_colours::fill_colours;
	}
	return point_colours;
}


// [[Rcpp::export]]
Rcpp::List rcpp_point_geojson(
		Rcpp::DataFrame data,
		Rcpp::List params,
		std::string geometry_columns,
		int digits,
		std::string layer_name
) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = point_defaults( data_rows );  // initialise with defaults

	Rcpp::StringVector point_legend = get_point_legend_colours( layer_name );
	std::unordered_map< std::string, std::string > point_colours = get_point_colours( layer_name );

	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_geojson_downcast(
		data,
		params,
		lst_defaults,
		point_colours,
		point_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true,  // jsonify legend
		digits
	);
}

// [[Rcpp::export]]
Rcpp::List rcpp_point_geojson_df(
		Rcpp::DataFrame data,
		Rcpp::List params,
		Rcpp::List geometry_columns,
		int digits,
		std::string layer_name
) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = point_defaults( data_rows );  // initialise with defaults

	Rcpp::StringVector point_legend = get_point_legend_colours( layer_name );
	std::unordered_map< std::string, std::string > point_colours = get_point_colours( layer_name );

	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	bool elevation = layer_name == "pointcloud" ? true : false;


	if( elevation ) {
		return spatialwidget::api::create_geojson(
			data,
			params,
			lst_defaults,
			point_colours,
			point_legend,
			data_rows,
			parameter_exclusions,
			geometry_columns,
			true,  // jsonify legend
			true,  // elevation
			digits
		);
	}

	return spatialwidget::api::create_geojson(
		data,
		params,
		lst_defaults,
		point_colours,
		point_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true,  // jsonify legend
		digits
	);
}


// [[Rcpp::export]]
Rcpp::List rcpp_point_polyline(
		Rcpp::DataFrame data,
		Rcpp::List params,
		Rcpp::StringVector geometry_columns,
		std::string layer_name
) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = point_defaults( data_rows );  // initialise with defaults

	Rcpp::StringVector point_legend = get_point_legend_colours( layer_name );
	std::unordered_map< std::string, std::string > point_colours = get_point_colours( layer_name );

	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_polyline(
		data,
		params,
		lst_defaults,
		point_colours,
		point_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}