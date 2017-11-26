
// headers for package arithmetic
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage abs();
VImage acos();
VImage add( VImage add_in2 );
VImage asin();
VImage atan();
double avg();
double point( char* point_interpolate, double point_x, double point_y, int point_band );
double point_bilinear( double point_bilinear_x, double point_bilinear_y, int point_bilinear_band );
VImage bandmean();
VImage ceil();
VImage cos();
VImage cross_phase( VImage cross_phase_in2 );
double deviate();
VImage divide( VImage divide_in2 );
VImage exp10();
VImage expn( double expn_x );
VImage expn( std::vector<double> expn_v );
VImage exp();
VImage floor();
VImage invert();
VImage lin( double lin_a, double lin_b );
static VImage linreg( std::vector<VImage> linreg_ins, std::vector<double> linreg_xs );
VImage lin( std::vector<double> lin_a, std::vector<double> lin_b );
VImage log10();
VImage log();
double max();
std::complex<double> maxpos();
double maxpos_avg( double& maxpos_avg_y, double& maxpos_avg_out );
VDMask measure( int measure_x, int measure_y, int measure_w, int measure_h, int measure_h_patches, int measure_v_patches );
double min();
std::complex<double> minpos();
VImage multiply( VImage multiply_in2 );
VImage pow( double pow_x );
VImage pow( std::vector<double> pow_v );
VImage recomb( VDMask recomb_matrix );
VImage remainder( VImage remainder_in2 );
VImage remainder( double remainder_x );
VImage remainder( std::vector<double> remainder_x );
VImage rint();
VImage sign();
VImage sin();
VDMask stats();
VImage subtract( VImage subtract_in2 );
VImage tan();

// headers for package cimg
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage greyc( int greyc_iterations, double greyc_amplitude, double greyc_sharpness, double greyc_anisotropy, double greyc_alpha, double greyc_sigma, double greyc_dl, double greyc_da, double greyc_gauss_prec, int greyc_interpolation, int greyc_fast_approx );
VImage greyc_mask( VImage greyc_mask_mask, int greyc_mask_iterations, double greyc_mask_amplitude, double greyc_mask_sharpness, double greyc_mask_anisotropy, double greyc_mask_alpha, double greyc_mask_sigma, double greyc_mask_dl, double greyc_mask_da, double greyc_mask_gauss_prec, int greyc_mask_interpolation, int greyc_mask_fast_approx );

// headers for package colour
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage LCh2Lab();
VImage LCh2UCS();
VImage Lab2LCh();
VImage Lab2LabQ();
VImage Lab2LabS();
VImage Lab2UCS();
VImage Lab2XYZ();
VImage Lab2XYZ_temp( double Lab2XYZ_temp_X0, double Lab2XYZ_temp_Y0, double Lab2XYZ_temp_Z0 );
VImage Lab2disp( VDisplay Lab2disp_disp );
VImage LabQ2LabS();
VImage LabQ2Lab();
VImage LabQ2XYZ();
VImage LabQ2disp( VDisplay LabQ2disp_disp );
VImage LabS2LabQ();
VImage LabS2Lab();
VImage UCS2LCh();
VImage UCS2Lab();
VImage UCS2XYZ();
VImage XYZ2Lab();
VImage XYZ2Lab_temp( double XYZ2Lab_temp_X0, double XYZ2Lab_temp_Y0, double XYZ2Lab_temp_Z0 );
VImage XYZ2UCS();
VImage XYZ2Yxy();
VImage XYZ2disp( VDisplay XYZ2disp_disp );
VImage XYZ2sRGB();
VImage Yxy2XYZ();
VImage dE00_fromLab( VImage dE00_fromLab_in2 );
VImage dECMC_fromLab( VImage dECMC_fromLab_in2 );
VImage dECMC_fromdisp( VImage dECMC_fromdisp_in2, VDisplay dECMC_fromdisp_disp );
VImage dE_fromLab( VImage dE_fromLab_in2 );
VImage dE_fromXYZ( VImage dE_fromXYZ_in2 );
VImage dE_fromdisp( VImage dE_fromdisp_in2, VDisplay dE_fromdisp_disp );
VImage disp2Lab( VDisplay disp2Lab_disp );
VImage disp2XYZ( VDisplay disp2XYZ_disp );
VImage float2rad();
VImage icc_ac2rc( char* icc_ac2rc_profile );
VImage icc_export_depth( int icc_export_depth_depth, char* icc_export_depth_output_profile, int icc_export_depth_intent );
VImage icc_import( char* icc_import_input_profile, int icc_import_intent );
VImage icc_import_embedded( int icc_import_embedded_intent );
VImage icc_transform( char* icc_transform_input_profile, char* icc_transform_output_profile, int icc_transform_intent );
VImage lab_morph( VDMask lab_morph_greyscale, double lab_morph_L_offset, double lab_morph_L_scale, double lab_morph_a_scale, double lab_morph_b_scale );
VImage rad2float();
VImage sRGB2XYZ();

// headers for package conversion
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
static VImage gaussnoise( int gaussnoise_xsize, int gaussnoise_ysize, double gaussnoise_mean, double gaussnoise_sigma );
VImage bandjoin( VImage bandjoin_in2 );
static VImage black( int black_x_size, int black_y_size, int black_bands );
VImage c2amph();
VImage c2imag();
VImage c2real();
VImage c2rect();
VImage clip2fmt( int clip2fmt_ofmt );
VImage copy();
VImage copy_file();
VImage copy_morph( int copy_morph_Bands, int copy_morph_BandFmt, int copy_morph_Coding );
VImage copy_swap();
VImage copy_set( int copy_set_Type, double copy_set_Xres, double copy_set_Yres, int copy_set_Xoffset, int copy_set_Yoffset );
VImage extract_area( int extract_area_left, int extract_area_top, int extract_area_width, int extract_area_height );
VImage extract_areabands( int extract_areabands_left, int extract_areabands_top, int extract_areabands_width, int extract_areabands_height, int extract_areabands_band, int extract_areabands_nbands );
VImage extract_band( int extract_band_band );
VImage extract_bands( int extract_bands_band, int extract_bands_nbands );
VImage extract( int extract_left, int extract_top, int extract_width, int extract_height, int extract_band );
VImage falsecolour();
VImage fliphor();
VImage flipver();
static VImage gbandjoin( std::vector<VImage> gbandjoin_in );
VImage grid( int grid_tile_height, int grid_across, int grid_down );
VImage insert( VImage insert_sub, int insert_x, int insert_y );
VImage insert( VImage insert_sub, std::vector<int> insert_x, std::vector<int> insert_y );
VImage insert_noexpand( VImage insert_noexpand_sub, int insert_noexpand_x, int insert_noexpand_y );
VImage embed( int embed_type, int embed_x, int embed_y, int embed_width, int embed_height );
VImage lrjoin( VImage lrjoin_in2 );
VImage msb();
VImage msb_band( int msb_band_band );
VImage replicate( int replicate_across, int replicate_down );
VImage ri2c( VImage ri2c_in2 );
VImage rot180();
VImage rot270();
VImage rot90();
VImage scale();
VImage scaleps();
VImage subsample( int subsample_xshrink, int subsample_yshrink );
char* system( char* system_command );
VImage system_image( char* system_image_in_format, char* system_image_out_format, char* system_image_command, char*& system_image_log );
VImage tbjoin( VImage tbjoin_in2 );
static VImage text( char* text_text, char* text_font, int text_width, int text_alignment, int text_dpi );
VImage wrap( int wrap_x, int wrap_y );
VImage zoom( int zoom_xfac, int zoom_yfac );

// headers for package convolution
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage aconvsep( VDMask aconvsep_matrix, int aconvsep_n_layers );
VImage aconv( VDMask aconv_matrix, int aconv_n_layers, int aconv_cluster );
VImage addgnoise( double addgnoise_sigma );
VImage compass( VIMask compass_matrix );
VImage contrast_surface( int contrast_surface_half_win_size, int contrast_surface_spacing );
VImage conv( VIMask conv_matrix );
VImage conv( VDMask conv_matrix );
VImage convsep( VIMask convsep_matrix );
VImage convsep( VDMask convsep_matrix );
VImage fastcor( VImage fastcor_in2 );
VImage gradcor( VImage gradcor_in2 );
VImage gradient( VIMask gradient_matrix );
VImage grad_x();
VImage grad_y();
VImage lindetect( VIMask lindetect_matrix );
VImage sharpen( int sharpen_mask_size, double sharpen_x1, double sharpen_y2, double sharpen_y3, double sharpen_m1, double sharpen_m2 );
VImage spcor( VImage spcor_in2 );

// headers for package deprecated
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage argb2rgba();
VImage flood_copy( int flood_copy_start_x, int flood_copy_start_y, std::vector<double> flood_copy_ink );
VImage flood_blob_copy( int flood_blob_copy_start_x, int flood_blob_copy_start_y, std::vector<double> flood_blob_copy_ink );
VImage flood_other_copy( VImage flood_other_copy_mark, int flood_other_copy_start_x, int flood_other_copy_start_y, int flood_other_copy_serial );
VImage clip();
VImage c2ps();
VImage resize_linear( int resize_linear_X, int resize_linear_Y );
VImage cmulnorm( VImage cmulnorm_in2 );
VImage fav4( VImage fav4_in2, VImage fav4_in3, VImage fav4_in4 );
VImage gadd( double gadd_a, double gadd_b, VImage gadd_in2, double gadd_c );
VImage icc_export( char* icc_export_output_profile, int icc_export_intent );
VImage litecor( VImage litecor_white, int litecor_clip, double litecor_factor );
VImage affine( double affine_a, double affine_b, double affine_c, double affine_d, double affine_dx, double affine_dy, int affine_x, int affine_y, int affine_w, int affine_h );
VImage clip2c();
VImage clip2cm();
VImage clip2d();
VImage clip2dcm();
VImage clip2f();
VImage clip2i();
VImage convsub( VIMask convsub_matrix, int convsub_xskip, int convsub_yskip );
VImage convf( VDMask convf_matrix );
VImage convsepf( VDMask convsepf_matrix );
VImage clip2s();
VImage clip2ui();
VImage insertplace( VImage insertplace_sub, std::vector<int> insertplace_x, std::vector<int> insertplace_y );
VImage clip2us();
VImage slice( double slice_thresh1, double slice_thresh2 );
VImage segment( int& segment_segments );
void line( int line_x1, int line_y1, int line_x2, int line_y2, int line_pelval );
VImage thresh( double thresh_threshold );
VImage convf_raw( VDMask convf_raw_matrix );
VImage conv_raw( VIMask conv_raw_matrix );
VImage contrast_surface_raw( int contrast_surface_raw_half_win_size, int contrast_surface_raw_spacing );
VImage convsepf_raw( VDMask convsepf_raw_matrix );
VImage convsep_raw( VIMask convsep_raw_matrix );
VImage fastcor_raw( VImage fastcor_raw_in2 );
VImage gradcor_raw( VImage gradcor_raw_in2 );
VImage spcor_raw( VImage spcor_raw_in2 );
VImage lhisteq_raw( int lhisteq_raw_width, int lhisteq_raw_height );
VImage stdif_raw( double stdif_raw_a, double stdif_raw_m0, double stdif_raw_b, double stdif_raw_s0, int stdif_raw_xw, int stdif_raw_yw );
VImage rank_raw( int rank_raw_xsize, int rank_raw_ysize, int rank_raw_n );
VImage dilate_raw( VIMask dilate_raw_mask );
VImage erode_raw( VIMask erode_raw_mask );
VImage similarity_area( double similarity_area_a, double similarity_area_b, double similarity_area_dx, double similarity_area_dy, int similarity_area_x, int similarity_area_y, int similarity_area_w, int similarity_area_h );
VImage similarity( double similarity_a, double similarity_b, double similarity_dx, double similarity_dy );
static VImage mask2vips( VDMask mask2vips_input );
VDMask vips2mask();
void insertplace( VImage insertplace_sub, int insertplace_x, int insertplace_y );
void circle( int circle_cx, int circle_cy, int circle_radius, int circle_intensity );
VImage andimage( VImage andimage_in2 );
VImage andimage( int andimage_c );
VImage andimage( std::vector<double> andimage_vec );
VImage orimage( VImage orimage_in2 );
VImage orimage( int orimage_c );
VImage orimage( std::vector<double> orimage_vec );
VImage eorimage( VImage eorimage_in2 );
VImage eorimage( int eorimage_c );
VImage eorimage( std::vector<double> eorimage_vec );
VImage shiftleft( std::vector<double> shiftleft_vec );
VImage shiftleft( int shiftleft_c );
VImage shiftright( std::vector<double> shiftright_vec );
VImage shiftright( int shiftright_c );
VImage blend( VImage blend_in1, VImage blend_in2 );
VImage equal( VImage equal_in2 );
VImage equal( std::vector<double> equal_vec );
VImage equal( double equal_c );
VImage ifthenelse( VImage ifthenelse_in1, VImage ifthenelse_in2 );
VImage less( VImage less_in2 );
VImage less( std::vector<double> less_vec );
VImage less( double less_c );
VImage lesseq( VImage lesseq_in2 );
VImage lesseq( std::vector<double> lesseq_vec );
VImage lesseq( double lesseq_c );
VImage more( VImage more_in2 );
VImage more( std::vector<double> more_vec );
VImage more( double more_c );
VImage moreeq( VImage moreeq_in2 );
VImage moreeq( std::vector<double> moreeq_vec );
VImage moreeq( double moreeq_c );
VImage notequal( VImage notequal_in2 );
VImage notequal( std::vector<double> notequal_vec );
VImage notequal( double notequal_c );
VImage quadratic( VImage quadratic_coeff );

// headers for package format
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
static VImage csv2vips( char* csv2vips_filename );
static VImage fits2vips( char* fits2vips_in );
static VImage jpeg2vips( char* jpeg2vips_in );
static VImage magick2vips( char* magick2vips_in );
static VImage png2vips( char* png2vips_in );
static VImage exr2vips( char* exr2vips_in );
static VImage ppm2vips( char* ppm2vips_filename );
static VImage analyze2vips( char* analyze2vips_filename );
static VImage tiff2vips( char* tiff2vips_in );
void vips2csv( char* vips2csv_filename );
void vips2dz( char* vips2dz_out );
void vips2jpeg( char* vips2jpeg_out );
void vips2mimejpeg( int vips2mimejpeg_qfac );
void vips2png( char* vips2png_out );
void vips2ppm( char* vips2ppm_filename );
void vips2tiff( char* vips2tiff_out );

// headers for package freq_filt
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
static VImage create_fmask( int create_fmask_width, int create_fmask_height, int create_fmask_type, double create_fmask_p1, double create_fmask_p2, double create_fmask_p3, double create_fmask_p4, double create_fmask_p5 );
VImage disp_ps();
VImage flt_image_freq( int flt_image_freq_type, double flt_image_freq_p1, double flt_image_freq_p2, double flt_image_freq_p3, double flt_image_freq_p4, double flt_image_freq_p5 );
static VImage fractsurf( int fractsurf_size, double fractsurf_dimension );
VImage freqflt( VImage freqflt_mask );
VImage fwfft();
VImage rotquad();
VImage invfft();
VImage phasecor_fft( VImage phasecor_fft_in2 );
VImage invfftr();

// headers for package histograms_lut
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage gammacorrect( double gammacorrect_exponent );
VImage heq( int heq_band_number );
VImage hist( int hist_band_number );
VImage histcum();
VImage histeq();
VImage hist_indexed( VImage hist_indexed_value );
VImage histgr( int histgr_band_number );
VImage histnD( int histnD_bins );
VImage histnorm();
VImage histplot();
VImage histspec( VImage histspec_ref );
VImage hsp( VImage hsp_ref );
static VImage identity( int identity_nbands );
static VImage identity_ushort( int identity_ushort_nbands, int identity_ushort_size );
int ismonotonic();
VImage lhisteq( int lhisteq_width, int lhisteq_height );
int mpercent( double mpercent_percent );
static VImage invertlut( VDMask invertlut_measures, int invertlut_lut_size );
static VImage buildlut( VDMask buildlut_xyes );
VImage maplut( VImage maplut_lut );
VImage project( VImage& project_vout );
VImage stdif( double stdif_a, double stdif_m0, double stdif_b, double stdif_s0, int stdif_xw, int stdif_yw );
VImage tone_analyse( double tone_analyse_Ps, double tone_analyse_Pm, double tone_analyse_Ph, double tone_analyse_S, double tone_analyse_M, double tone_analyse_H );
static VImage tone_build( double tone_build_Lb, double tone_build_Lw, double tone_build_Ps, double tone_build_Pm, double tone_build_Ph, double tone_build_S, double tone_build_M, double tone_build_H );
static VImage tone_build_range( int tone_build_range_in_max, int tone_build_range_out_max, double tone_build_range_Lb, double tone_build_range_Lw, double tone_build_range_Ps, double tone_build_range_Pm, double tone_build_range_Ph, double tone_build_range_S, double tone_build_range_M, double tone_build_range_H );
VImage tone_map( VImage tone_map_lut );

// headers for package inplace
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
void draw_circle( int draw_circle_cx, int draw_circle_cy, int draw_circle_radius, int draw_circle_fill, std::vector<double> draw_circle_ink );
void draw_rect( int draw_rect_left, int draw_rect_top, int draw_rect_width, int draw_rect_height, int draw_rect_fill, std::vector<double> draw_rect_ink );
void draw_line( int draw_line_x1, int draw_line_y1, int draw_line_x2, int draw_line_y2, std::vector<double> draw_line_ink );
void draw_point( int draw_point_x, int draw_point_y, std::vector<double> draw_point_ink );
void draw_smudge( int draw_smudge_left, int draw_smudge_top, int draw_smudge_width, int draw_smudge_height );
void draw_flood( int draw_flood_x, int draw_flood_y, std::vector<double> draw_flood_ink );
void draw_flood_blob( int draw_flood_blob_x, int draw_flood_blob_y, std::vector<double> draw_flood_blob_ink );
void draw_flood_other( VImage draw_flood_other_test, int draw_flood_other_x, int draw_flood_other_y, int draw_flood_other_serial );
void draw_image( VImage draw_image_sub, int draw_image_x, int draw_image_y );
void draw_mask( VImage draw_mask_mask, int draw_mask_x, int draw_mask_y, std::vector<double> draw_mask_ink );
VImage line( VImage line_mask, VImage line_ink, std::vector<int> line_x1, std::vector<int> line_y1, std::vector<int> line_x2, std::vector<int> line_y2 );

// headers for package iofuncs
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
static VImage binfile( char* binfile_filename, int binfile_width, int binfile_height, int binfile_bands, int binfile_offset );
VImage cache( int cache_tile_width, int cache_tile_height, int cache_max_tiles );
VImage tile_cache_random( int tile_cache_random_tile_width, int tile_cache_random_tile_height, int tile_cache_random_max_tiles );
char* getext();
int header_get_typeof( char* header_get_typeof_field );
int header_int( char* header_int_field );
double header_double( char* header_double_field );
char* header_string( char* header_string_field );
char* history_get();
void printdesc();

// headers for package mask
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017

// headers for package morphology
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
double cntlines( int cntlines_direction );
VImage dilate( VIMask dilate_mask );
VImage rank( int rank_xsize, int rank_ysize, int rank_n );
static VImage rank_image( std::vector<VImage> rank_image_in, int rank_image_index );
static VImage maxvalue( std::vector<VImage> maxvalue_in );
VImage label_regions( int& label_regions_segments );
VImage zerox( int zerox_flag );
VImage erode( VIMask erode_mask );
VImage profile( int profile_direction );

// headers for package mosaicing
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage align_bands();
double correl( VImage correl_sec, int correl_xref, int correl_yref, int correl_xsec, int correl_ysec, int correl_hwindowsize, int correl_hsearchsize, int& correl_x, int& correl_y );
int _find_lroverlap( VImage _find_lroverlap_sec, int _find_lroverlap_bandno, int _find_lroverlap_xr, int _find_lroverlap_yr, int _find_lroverlap_xs, int _find_lroverlap_ys, int _find_lroverlap_halfcorrelation, int _find_lroverlap_halfarea, int& _find_lroverlap_dy0, double& _find_lroverlap_scale1, double& _find_lroverlap_angle1, double& _find_lroverlap_dx1, double& _find_lroverlap_dy1 );
int _find_tboverlap( VImage _find_tboverlap_sec, int _find_tboverlap_bandno, int _find_tboverlap_xr, int _find_tboverlap_yr, int _find_tboverlap_xs, int _find_tboverlap_ys, int _find_tboverlap_halfcorrelation, int _find_tboverlap_halfarea, int& _find_tboverlap_dy0, double& _find_tboverlap_scale1, double& _find_tboverlap_angle1, double& _find_tboverlap_dx1, double& _find_tboverlap_dy1 );
VImage global_balance( double global_balance_gamma );
VImage global_balancef( double global_balancef_gamma );
VImage lrmerge( VImage lrmerge_sec, int lrmerge_dx, int lrmerge_dy, int lrmerge_mwidth );
VImage lrmerge1( VImage lrmerge1_sec, int lrmerge1_xr1, int lrmerge1_yr1, int lrmerge1_xs1, int lrmerge1_ys1, int lrmerge1_xr2, int lrmerge1_yr2, int lrmerge1_xs2, int lrmerge1_ys2, int lrmerge1_mwidth );
VImage lrmosaic( VImage lrmosaic_sec, int lrmosaic_bandno, int lrmosaic_xr, int lrmosaic_yr, int lrmosaic_xs, int lrmosaic_ys, int lrmosaic_halfcorrelation, int lrmosaic_halfarea, int lrmosaic_balancetype, int lrmosaic_mwidth );
VImage lrmosaic1( VImage lrmosaic1_sec, int lrmosaic1_bandno, int lrmosaic1_xr1, int lrmosaic1_yr1, int lrmosaic1_xs1, int lrmosaic1_ys1, int lrmosaic1_xr2, int lrmosaic1_yr2, int lrmosaic1_xs2, int lrmosaic1_ys2, int lrmosaic1_halfcorrelation, int lrmosaic1_halfarea, int lrmosaic1_balancetype, int lrmosaic1_mwidth );
VImage match_linear( VImage match_linear_sec, int match_linear_xref1, int match_linear_yref1, int match_linear_xsec1, int match_linear_ysec1, int match_linear_xref2, int match_linear_yref2, int match_linear_xsec2, int match_linear_ysec2 );
VImage match_linear_search( VImage match_linear_search_sec, int match_linear_search_xref1, int match_linear_search_yref1, int match_linear_search_xsec1, int match_linear_search_ysec1, int match_linear_search_xref2, int match_linear_search_yref2, int match_linear_search_xsec2, int match_linear_search_ysec2, int match_linear_search_hwindowsize, int match_linear_search_hsearchsize );
double maxpos_subpel( double& maxpos_subpel_y );
VImage remosaic( char* remosaic_old_str, char* remosaic_new_str );
VImage tbmerge( VImage tbmerge_sec, int tbmerge_dx, int tbmerge_dy, int tbmerge_mwidth );
VImage tbmerge1( VImage tbmerge1_sec, int tbmerge1_xr1, int tbmerge1_yr1, int tbmerge1_xs1, int tbmerge1_ys1, int tbmerge1_xr2, int tbmerge1_yr2, int tbmerge1_xs2, int tbmerge1_ys2, int tbmerge1_mwidth );
VImage tbmosaic( VImage tbmosaic_sec, int tbmosaic_bandno, int tbmosaic_xr, int tbmosaic_yr, int tbmosaic_xs, int tbmosaic_ys, int tbmosaic_halfcorrelation, int tbmosaic_halfarea, int tbmosaic_balancetype, int tbmosaic_mwidth );
VImage tbmosaic1( VImage tbmosaic1_sec, int tbmosaic1_bandno, int tbmosaic1_xr1, int tbmosaic1_yr1, int tbmosaic1_xs1, int tbmosaic1_ys1, int tbmosaic1_xr2, int tbmosaic1_yr2, int tbmosaic1_xs2, int tbmosaic1_ys2, int tbmosaic1_halfcorrelation, int tbmosaic1_halfarea, int tbmosaic1_balancetype, int tbmosaic1_mwidth );

// headers for package other
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage benchmark();
double benchmark2();
VImage benchmarkn( int benchmarkn_n );
static VImage eye( int eye_xsize, int eye_ysize, double eye_factor );
static VImage grey( int grey_xsize, int grey_ysize );
static VImage feye( int feye_xsize, int feye_ysize, double feye_factor );
static VImage fgrey( int fgrey_xsize, int fgrey_ysize );
static VImage fzone( int fzone_size );
static VImage make_xy( int make_xy_xsize, int make_xy_ysize );
static VImage sines( int sines_xsize, int sines_ysize, double sines_horfreq, double sines_verfreq );
static VImage zone( int zone_size );

// headers for package resample
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
VImage rightshift_size( int rightshift_size_xshift, int rightshift_size_yshift, int rightshift_size_band_fmt );
VImage shrink( double shrink_xfac, double shrink_yfac );
VImage stretch3( double stretch3_xdisp, double stretch3_ydisp );
VImage affinei( char* affinei_interpolate, double affinei_a, double affinei_b, double affinei_c, double affinei_d, double affinei_dx, double affinei_dy, int affinei_x, int affinei_y, int affinei_w, int affinei_h );
VImage affinei_all( char* affinei_all_interpolate, double affinei_all_a, double affinei_all_b, double affinei_all_c, double affinei_all_d, double affinei_all_dx, double affinei_all_dy );

// headers for package video
// this file automatically generated from
// VIPS library 8.6.0-Sun Nov 26 17:45:39 GMT 2017
static VImage video_test( int video_test_brightness, int video_test_error );
static VImage video_v4l1( char* video_v4l1_device, int video_v4l1_channel, int video_v4l1_brightness, int video_v4l1_colour, int video_v4l1_contrast, int video_v4l1_hue, int video_v4l1_ngrabs );

