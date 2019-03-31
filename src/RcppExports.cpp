// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_arc_geojson
Rcpp::List rcpp_arc_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_arc_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_arc_geojson(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_arc_geojson_df
Rcpp::List rcpp_arc_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_arc_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_arc_geojson_df(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_arc_polyline
Rcpp::List rcpp_arc_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_arc_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_arc_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geojson_geojson
Rcpp::List rcpp_geojson_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_column);
RcppExport SEXP _mapdeck_rcpp_geojson_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_column(geometry_columnSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geojson_geojson(data, params, geometry_column));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greatcircle_geojson
Rcpp::List rcpp_greatcircle_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_greatcircle_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_greatcircle_geojson(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greatcircle_geojson_df
Rcpp::List rcpp_greatcircle_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_greatcircle_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_greatcircle_geojson_df(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greatcircle_polyline
Rcpp::List rcpp_greatcircle_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_greatcircle_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_greatcircle_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_grid_geojson
Rcpp::List rcpp_grid_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_column, int digits);
RcppExport SEXP _mapdeck_rcpp_grid_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_column(geometry_columnSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_grid_geojson(data, params, geometry_column, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_grid_geojson_df
Rcpp::List rcpp_grid_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_grid_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_grid_geojson_df(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_grid_polyline
Rcpp::List rcpp_grid_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_grid_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_grid_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hexagon_geojson
Rcpp::List rcpp_hexagon_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_hexagon_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hexagon_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hexagon_geojson_df
Rcpp::List rcpp_hexagon_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_hexagon_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hexagon_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hexagon_polyline
Rcpp::List rcpp_hexagon_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_hexagon_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hexagon_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_line_geojson
Rcpp::List rcpp_line_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_line_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_line_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_line_geojson_df
Rcpp::List rcpp_line_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_line_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_line_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_path_geojson
Rcpp::List rcpp_path_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_path_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_path_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_path_polyline
Rcpp::List rcpp_path_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_path_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_path_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pointcloud_geojson
Rcpp::List rcpp_pointcloud_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_pointcloud_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pointcloud_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pointcloud_geojson_df
Rcpp::List rcpp_pointcloud_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_pointcloud_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pointcloud_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pointcloud_polyline
Rcpp::List rcpp_pointcloud_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_pointcloud_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pointcloud_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polygon_geojson
Rcpp::List rcpp_polygon_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_polygon_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polygon_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polygon_polyline
Rcpp::List rcpp_polygon_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_polygon_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polygon_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scatterplot_geojson
Rcpp::List rcpp_scatterplot_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_scatterplot_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_scatterplot_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scatterplot_geojson_df
Rcpp::List rcpp_scatterplot_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_scatterplot_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_scatterplot_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scatterplot_polyline
Rcpp::List rcpp_scatterplot_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_scatterplot_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_scatterplot_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_screengrid_geojson
Rcpp::List rcpp_screengrid_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_screengrid_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_screengrid_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_screengrid_geojson_df
Rcpp::List rcpp_screengrid_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_screengrid_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_screengrid_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_screengrid_polyline
Rcpp::List rcpp_screengrid_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_screengrid_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_screengrid_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_geojson
Rcpp::List rcpp_text_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_columns);
RcppExport SEXP _mapdeck_rcpp_text_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_geojson_df
Rcpp::List rcpp_text_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns);
RcppExport SEXP _mapdeck_rcpp_text_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_geojson_df(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_polyline
Rcpp::List rcpp_text_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_text_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mapdeck_rcpp_arc_geojson", (DL_FUNC) &_mapdeck_rcpp_arc_geojson, 4},
    {"_mapdeck_rcpp_arc_geojson_df", (DL_FUNC) &_mapdeck_rcpp_arc_geojson_df, 4},
    {"_mapdeck_rcpp_arc_polyline", (DL_FUNC) &_mapdeck_rcpp_arc_polyline, 3},
    {"_mapdeck_rcpp_geojson_geojson", (DL_FUNC) &_mapdeck_rcpp_geojson_geojson, 3},
    {"_mapdeck_rcpp_greatcircle_geojson", (DL_FUNC) &_mapdeck_rcpp_greatcircle_geojson, 4},
    {"_mapdeck_rcpp_greatcircle_geojson_df", (DL_FUNC) &_mapdeck_rcpp_greatcircle_geojson_df, 4},
    {"_mapdeck_rcpp_greatcircle_polyline", (DL_FUNC) &_mapdeck_rcpp_greatcircle_polyline, 3},
    {"_mapdeck_rcpp_grid_geojson", (DL_FUNC) &_mapdeck_rcpp_grid_geojson, 4},
    {"_mapdeck_rcpp_grid_geojson_df", (DL_FUNC) &_mapdeck_rcpp_grid_geojson_df, 4},
    {"_mapdeck_rcpp_grid_polyline", (DL_FUNC) &_mapdeck_rcpp_grid_polyline, 3},
    {"_mapdeck_rcpp_hexagon_geojson", (DL_FUNC) &_mapdeck_rcpp_hexagon_geojson, 3},
    {"_mapdeck_rcpp_hexagon_geojson_df", (DL_FUNC) &_mapdeck_rcpp_hexagon_geojson_df, 3},
    {"_mapdeck_rcpp_hexagon_polyline", (DL_FUNC) &_mapdeck_rcpp_hexagon_polyline, 3},
    {"_mapdeck_rcpp_line_geojson", (DL_FUNC) &_mapdeck_rcpp_line_geojson, 3},
    {"_mapdeck_rcpp_line_geojson_df", (DL_FUNC) &_mapdeck_rcpp_line_geojson_df, 3},
    {"_mapdeck_rcpp_path_geojson", (DL_FUNC) &_mapdeck_rcpp_path_geojson, 3},
    {"_mapdeck_rcpp_path_polyline", (DL_FUNC) &_mapdeck_rcpp_path_polyline, 3},
    {"_mapdeck_rcpp_pointcloud_geojson", (DL_FUNC) &_mapdeck_rcpp_pointcloud_geojson, 3},
    {"_mapdeck_rcpp_pointcloud_geojson_df", (DL_FUNC) &_mapdeck_rcpp_pointcloud_geojson_df, 3},
    {"_mapdeck_rcpp_pointcloud_polyline", (DL_FUNC) &_mapdeck_rcpp_pointcloud_polyline, 3},
    {"_mapdeck_rcpp_polygon_geojson", (DL_FUNC) &_mapdeck_rcpp_polygon_geojson, 3},
    {"_mapdeck_rcpp_polygon_polyline", (DL_FUNC) &_mapdeck_rcpp_polygon_polyline, 3},
    {"_mapdeck_rcpp_scatterplot_geojson", (DL_FUNC) &_mapdeck_rcpp_scatterplot_geojson, 3},
    {"_mapdeck_rcpp_scatterplot_geojson_df", (DL_FUNC) &_mapdeck_rcpp_scatterplot_geojson_df, 3},
    {"_mapdeck_rcpp_scatterplot_polyline", (DL_FUNC) &_mapdeck_rcpp_scatterplot_polyline, 3},
    {"_mapdeck_rcpp_screengrid_geojson", (DL_FUNC) &_mapdeck_rcpp_screengrid_geojson, 3},
    {"_mapdeck_rcpp_screengrid_geojson_df", (DL_FUNC) &_mapdeck_rcpp_screengrid_geojson_df, 3},
    {"_mapdeck_rcpp_screengrid_polyline", (DL_FUNC) &_mapdeck_rcpp_screengrid_polyline, 3},
    {"_mapdeck_rcpp_text_geojson", (DL_FUNC) &_mapdeck_rcpp_text_geojson, 3},
    {"_mapdeck_rcpp_text_geojson_df", (DL_FUNC) &_mapdeck_rcpp_text_geojson_df, 3},
    {"_mapdeck_rcpp_text_polyline", (DL_FUNC) &_mapdeck_rcpp_text_polyline, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_mapdeck(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
