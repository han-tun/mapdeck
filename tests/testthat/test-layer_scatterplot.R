context("scatterplot")

test_that("add_scatterplot accepts multiple objects", {

	testthat::skip_on_cran()
	testthat::skip_on_travis()

	geo <- '[{"type":"Feature","properties":{"fill_colour":"#440154FF","stroke_colour":"#440154FF","stroke_width":0.0},"geometry":{"geometry":{"type":"Point","coordinates":[69.11,34.28]}}}]'
	poly <- '[{"fill_colour":"#440154FF","stroke_colour":"#440154FF","stroke_width":0.0,"polyline":"_ifpEo`ydL"}]'

	## sf
	set_token("abc")
	m <- mapdeck()

	sf <- sf::st_as_sf( capitals[1, ], coords = c("lon", "lat") )
	p <- add_scatterplot(map = m, data = sf)
	expect_equal( as.character( p$x$calls[[1]]$args[[2]] ), geo )

	## sfencoded
	enc <- googlePolylines::encode( sf )
	p <- add_scatterplot( map = m, data = enc )
	expect_equal( as.character( p$x$calls[[1]]$args[[2]] ), poly )

	## sfencodedLite
	enc <- googlePolylines::encode( sf, strip = T )
	p <- add_scatterplot( map = m, data = enc )
	expect_equal( as.character( p$x$calls[[1]]$args[[2]] ), poly )

	## data.frame with polyline
	df <- as.data.frame( enc )
	df$geometry <- unlist( df$geometry )

	p <- add_scatterplot( map = m, data = df, polyline = "geometry" )
	expect_equal( as.character( p$x$calls[[1]]$args[[2]] ), poly )

	## data.frame
	p <- add_scatterplot( map = m, data = capitals[1, ], lon = "lon", lat = "lat" )
	expect_equal( as.character( p$x$calls[[1]]$args[[2]] ), geo )

})
