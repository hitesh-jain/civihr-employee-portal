<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */

?>

<?php
    global $user; // Show only if we have the logged in user

    $actions_classes = 'ctools-use-modal ctools-modal-civihr-custom-style chr_action--icon--edit';

    if ($user->uid) {
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="row relative">
        <div class="col-md-2">
            <div class="chr_profile-card hidden-xs hidden-sm">
                <div class="chr_profile-card__picture">
                    <?php if (isset($contact_data['image_URL']) && !empty($contact_data['image_URL'])) { ?>
                        <img src="<?php print $contact_data['image_URL']; ?>" />
                    <?php } else { ?>
                        <img src="<?php print drupal_get_path('module', 'civihr_employee_portal') . '/images/profile-default.png' ?>"/>
                    <?php } ?>
                </div>
            </div>
        </div>
        <div class="col-md-5 chr_panel--my-details__data-group">
            <h5 class="chr_panel--my-details__data-group__title"><?php print t('My Details'); ?></h5>
            <div class="chr_panel--my-details__data-group__content">
                <?php print $contact_details; ?>
            </div>
        </div>
        <div class="col-md-offset-7 vertical-splitter hidden-xs hidden-sm"></div>
        <div class="col-md-5 chr_panel--my-details__data-group">
            <h5 class="chr_panel--my-details__data-group__title"><?php print $address_data_title ?></h5>
            <div class="chr_panel--my-details__data-group__content">
                <?php print $address_data; ?>
            </div>
        </div>
    </div>
    <div class="chr_panel__footer">
        <div class="chr_actions-wrapper">
            <?php print l(t('Edit my details'), 'my_details/nojs/view', array('attributes' => array('class' => $actions_classes))); ?>
            <?php print l(t('Edit emergency contact'), 'emergency_contacts/nojs/view', array('attributes' => array('class' => $actions_classes))); ?>
        </div>
    </div>
</div>
<?php
    }
?>
