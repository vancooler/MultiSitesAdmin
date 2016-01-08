<?php
/**
 * @file
 * marketing_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marketing_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'webpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Webpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Webpage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 1;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_product_node']['id'] = 'reverse_field_product_node';
  $handler->display->display_options['relationships']['reverse_field_product_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_product_node']['field'] = 'reverse_field_product_node';
  $handler->display->display_options['relationships']['reverse_field_product_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'WebpageTitle';
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  /* Field: Content: Footer Text */
  $handler->display->display_options['fields']['field_footer_text']['id'] = 'field_footer_text';
  $handler->display->display_options['fields']['field_footer_text']['table'] = 'field_data_field_footer_text';
  $handler->display->display_options['fields']['field_footer_text']['field'] = 'field_footer_text';
  $handler->display->display_options['fields']['field_footer_text']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_footer_text']['label'] = 'FooterText';
  /* Field: Content: logo */
  $handler->display->display_options['fields']['field_logo_1']['id'] = 'field_logo_1';
  $handler->display->display_options['fields']['field_logo_1']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo_1']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo_1']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_logo_1']['label'] = 'website_logo';
  $handler->display->display_options['fields']['field_logo_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Location: Additional */
  $handler->display->display_options['fields']['additional']['id'] = 'additional';
  $handler->display->display_options['fields']['additional']['table'] = 'location';
  $handler->display->display_options['fields']['additional']['field'] = 'additional';
  $handler->display->display_options['fields']['additional']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['additional']['hide_empty'] = TRUE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['postal_code']['label'] = 'PostalCode';
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = TRUE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['street']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'PhoneNumber';
  $handler->display->display_options['fields']['field_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Support Email */
  $handler->display->display_options['fields']['field_support_email']['id'] = 'field_support_email';
  $handler->display->display_options['fields']['field_support_email']['table'] = 'field_data_field_support_email';
  $handler->display->display_options['fields']['field_support_email']['field'] = 'field_support_email';
  $handler->display->display_options['fields']['field_support_email']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_support_email']['label'] = 'SupportEmail';
  $handler->display->display_options['fields']['field_support_email']['hide_empty'] = TRUE;
  /* Field: Content: productId */
  $handler->display->display_options['fields']['field_productid']['id'] = 'field_productid';
  $handler->display->display_options['fields']['field_productid']['table'] = 'field_data_field_productid';
  $handler->display->display_options['fields']['field_productid']['field'] = 'field_productid';
  $handler->display->display_options['fields']['field_productid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_productid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: campaignId */
  $handler->display->display_options['fields']['field_campaignid']['id'] = 'field_campaignid';
  $handler->display->display_options['fields']['field_campaignid']['table'] = 'field_data_field_campaignid';
  $handler->display->display_options['fields']['field_campaignid']['field'] = 'field_campaignid';
  $handler->display->display_options['fields']['field_campaignid']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_campaignid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_campaignid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: companyName */
  $handler->display->display_options['fields']['field_companyname']['id'] = 'field_companyname';
  $handler->display->display_options['fields']['field_companyname']['table'] = 'field_data_field_companyname';
  $handler->display->display_options['fields']['field_companyname']['field'] = 'field_companyname';
  $handler->display->display_options['fields']['field_companyname']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['fields']['field_companyname']['hide_empty'] = TRUE;
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients']['id'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['table'] = 'field_data_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['field'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ingredients']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ingredients']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Monthly Price */
  $handler->display->display_options['fields']['field_monthly_price']['id'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['table'] = 'field_data_field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['field'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['label'] = 'MonthlyPrice';
  $handler->display->display_options['fields']['field_monthly_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Shipping Id */
  $handler->display->display_options['fields']['field_shipping_id']['id'] = 'field_shipping_id';
  $handler->display->display_options['fields']['field_shipping_id']['table'] = 'field_data_field_shipping_id';
  $handler->display->display_options['fields']['field_shipping_id']['field'] = 'field_shipping_id';
  $handler->display->display_options['fields']['field_shipping_id']['label'] = 'ShippingId';
  $handler->display->display_options['fields']['field_shipping_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_shipping_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Shipping Price */
  $handler->display->display_options['fields']['field_shipping_price']['id'] = 'field_shipping_price';
  $handler->display->display_options['fields']['field_shipping_price']['table'] = 'field_data_field_shipping_price';
  $handler->display->display_options['fields']['field_shipping_price']['field'] = 'field_shipping_price';
  $handler->display->display_options['fields']['field_shipping_price']['label'] = 'ShippingPrice';
  $handler->display->display_options['fields']['field_shipping_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_shipping_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Terms and Conditions */
  $handler->display->display_options['fields']['field_terms_and_conditions']['id'] = 'field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['table'] = 'field_data_field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['field'] = 'field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['label'] = 'TermsAndConditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['hide_empty'] = TRUE;
  /* Field: Content: Trial Price */
  $handler->display->display_options['fields']['field_trial_price']['id'] = 'field_trial_price';
  $handler->display->display_options['fields']['field_trial_price']['table'] = 'field_data_field_trial_price';
  $handler->display->display_options['fields']['field_trial_price']['field'] = 'field_trial_price';
  $handler->display->display_options['fields']['field_trial_price']['label'] = 'TrialPrice';
  $handler->display->display_options['fields']['field_trial_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_trial_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Product (field_product:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_product';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_product_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'webpage';
  $export['webpage'] = $view;

  return $export;
}
