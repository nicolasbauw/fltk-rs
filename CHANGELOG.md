# Changelog

## [0.8.7] - 2020-09-14
### Changes
- Accept AsRef<Path> where &Path was previously required.
- Update FLTK.
- Update deps.

## [0.8.6] - 2020-09-09
### Changes
- Add null check on C++ side when loading fonts.
- Update FLTK.
- Add doc comments on MenuExt::add() labels.

## [0.8.5] - 2020-09-04
### Changes
- Add App::load_font() to load a font from a path.
- Update build.rs to reflect latest FLTK cmake options.

## [0.8.4] - 2020-09-01
### Changes
- Remove potentially failing internal unwraps.

## [0.8.3] - 2020-08-21
### Changes
- Update FLTK.
- Update syn.
- Clean up examples.
- Add fltk-sys example.
- Restructure C wrapper.
- Rename enum InputType field value InputType to Input.

## [0.8.2] - 2020-08-21
### Changes
- Add experimental no-images feature flag.
- cfltk and fltk are compiled with no-rtti and no-exceptions.
- Override placement new in cfltk.
- Add note on exception-safety in FAQ.
- mark app::set_raw_callback as unsafe.
- Add static widget, buffer and image deletion functions.
- Fixed typo app::dispaly -> app::display (Thanks @DBLouis).
- Remove default linkage to C++ std library.

## [0.8.1] - 2020-08-13
### Changes
- Add app::set_raw_callback() which avoids boxing callbacks.
- Update FLTK to after commit cd26829 which adds MacOS 11.0 support.
- Add missing docs for callback arguments.
- Add TextBuffer::save_file().
- Use expect() in the build script to give meaningful messages on missing dependencies.

## [0.8.0] - 2020-08-02
### Changes
- Make fltk-sys no_std.
- Add feature flag "enable-glwindow".
- Remove feature flag "no-opengl".
- Separate raw opengl functions into their own crate "glu-sys".
- Add DoubleWindow::flush().
- Update dependencies (syn to 1.0.36).

## [0.7.26] - 2020-08-01
### Changes
- Add alias Scheme to AppScheme.
- Add WindowExt::fullscreen_active() and WindowExt::iconize().
- Update FLTK.


## [0.7.25] - 2020-07-30
### Changes
- Fix WindowExt::raw_handle() method on systems where `unsigned long int` is u32.
- Make several free functions in the app module public.

## [0.7.24] - 2020-07-29
### Changes
- Add convenience functions dialog::file_chooser() and dialog::dir_chooser().
- Add color_chooser() convenience function.
- Add dialog::FileChooser::window().
- impl BitOr for dialog::FileChooserType.
- Add WidgetExt::set_pos and WidgetExt::set_size.

## [0.7.23] - 2020-07-28
### Changes
- Add Fltk's own FileChooser. In addition to the already available native FileDialog.
- Add app::wait_for(dur: f64).

## [0.7.22] - 2020-07-25
### Changes
- Add impl BitOr<Key> for Shortcut.
- Change impl Add to impl BitOr for Shortcut.
- Add Shortcut::from_key() and Shortcut::from_i32().

## [0.7.21] - 2020-07-24
### Changes
- Add Window::show_with_args() and show_with_env_args() for FLTK specific command-line arguments.
- Add FrameType::by_index().
- Add some missing asserts.

## [0.7.20] - 2020-07-23
### Changes
- Add missing docs for new TextEditor functions.
- Add SingleWindow widget.
- Add more FileBrowser methods.

## [0.7.19] - 2020-07-22
### Changes
- Add Pixmap.
- Use high res GL on MacOS by default when OpenGL is supported.
- Add more Tabs methods.
- Add rest of TextEditor methods.
- Move LineStyle to draw module.
- Move ChartType to misc module.

## [0.7.18] - 2020-07-20
### Changes
- Allow getting the fl_display and fl_gc globabl variables.
- Add null checks for methods acquiring and requiring raw handles.

## [0.7.17] - 2020-07-19
### Changes
- Add several more image types.
- Add SysMenuBar widget.
- Add WindowExt::region and set_region methods.

## [0.7.16] - 2020-07-17
### Changes
- Change interface of raw handles to return and accept RawHandle (HWND on windows, NSWindow on macos, Xid on X11).
- Rename Window::from_raw_handle() to Window::find_by_handle().
- Add event coordinate getters relative to the screen position of the cursor.

## [0.7.15] - 2020-07-16
### Changes
- Add fl_find(Window xid) as Window::from_raw_handle().
- Add RawWindowHandle as a wrapper around an opaque type.

## [0.7.14] - 2020-07-12
### Changes
- FLTK update.
- Add ScrollType enum.
- Update versions of syn, quote and cmake.
- Add Scroll::scrollbar() and Scroll::hscrollbar().
- Add BrowserExt::scrollbar() and BrowserExt::hscrollbar().

## [0.7.13] - 2020-07-10
### Changes
- Add missing stdint.h header at cfl.cpp.
- Expose unsafe TableExt::draw_cell_data() and set_draw_cell_data() methods.

## [0.7.12] - 2020-07-05
### Changes
- Refactoring.
- Add ``` # Safety``` to docs.
- Add to readme and faq.
- Fix "save as" in the editor example.

## [0.7.11] - 2020-07-04
### Changes
- Fixed Chart colors.

## [0.7.10] - 2020-07-03
### Changes
- MenuItem::new now takes a slice instead of a vector.

## [0.7.9] - 2020-06-30
### Changes
- Add exception checks in callbacks.

## [0.7.8] - 2020-06-29
### Changes
- Add app::belowmouse, pushed and focus functions.
- Add functions to query FLTK's api and abi versions.

## [0.7.7] - 2020-06-28
### Changes
- Remove Copy trait from TextBuffer and Images since it was potentially unsound.
- Rename TextBuffer::copy to copy_from to avoid conflict with copy method which does a deep copy.

## [0.7.6] - 2020-06-27
### Changes
- Deprecate App::set_scheme in favor of App::with_scheme.


## [0.7.5] - 2020-06-26
### Changes
- Change char flags to return raw::c_char instead of i8/u8.
- Add is_ascii assert for set_column_char and set_format_char.
- Add missing docs for BrowserExt methods.
- Add None to BrowserScrollbar Enum.
- Rename BrowserScrollBar to BrowserScrollbar.
- Remove redundancies in WidgetType enum values.

## [0.7.4] - 2020-06-25
### Changes
- Add several missing methods to BrowserExt methods.

## [0.7.3] - 2020-06-24
### Changes
- Added PackType which can be used with the Pack widget.

## [0.7.2] - 2020-06-23
### Changes
- Clean up fonts interface. Add example on how to use system fonts.
- Add app::delay() which delays the execution of the application.
- Add missing docs.

## [0.7.1] - 2020-06-22
### Changes
- Add asserts around TextBuffer operations.

## [0.7.0] - 2020-06-21
### Changes
- Change interface for working with images. Now widgets take an Option<ImageExt>. This allows unsetting images.
- Remove unnecessary copy when setting a widget image.
- Add deimage and set_deimage methods to WidgetExt.
- The DisplayExt::set_buffer() takes an optional buffer, this allows unsetting the buffer.
- The DisplayExt widgets have the same constructors as other widgets.
- Fixed TextBuffer load_file method.
- Added assert to length of style entries.

## [0.6.9] - 2020-06-20
### Changes
- Fix image deletion.
- Add asserts to check if an image was deleted.
- Add note on image lifetimes in relation to widgets.

## [0.6.8] - 2020-06-19
### Changes
- Give image type specialized drop impls.

## [0.6.7] - 2020-06-18
### Changes
- Provide unsafe variant for widget deletion, which would delete user_data recursively for when needed.
- Improve docs about TableRow.

## [0.6.6] - 2020-06-17
### Changes
- RgbImage takes ownership of the underlying data.
- Remove gl_start and gl_finish.
- Add App::set_visual(Mode), app::own_colormap, app::set_focus.
- Fix Cursor naming.
- Update FLTK to commit 5005d04 for further SVG fixes.
- Add TableExt::draw_cell and TableContext.
- Rename Align enum members.

## [0.6.5] - 2020-06-16
### Changes
- Fix cmake invocation on Windows to build for release.
- Add most ImageExt methods.
- Change signature of draw::write_<image>_file to accept ImageExt trait.
- SharedImage::from_image() can't take ownership of the image.
- Add BMP, Jpeg and PNG image conversion methods.
- Update FLTK to commit 46b8968 which fixes Fl_SVG_Image to window icon issue.
- Add damage related methods to WidgetExt.
- Add gl_start and gl_finish to enable gl drawing within widgets.

## [0.6.4] - 2020-06-15
### Changes
- Rename SharedImage::from_rgb to from_image.
- Add count method to ImageExt.
- Modify visibility of internal image methods.
- ImageExt::to_rgb_data marked as unsafe.
- Added ImageExt::to_rgb_image.
- Update FLTK to commit b831848.
- Add assert for WindowExt::set_icon() supported image types.

## [0.6.3] - 2020-06-13
### Changes
- Fix memory leak with set_image and set_icon methods.
- Mark Image::into<ImageExt>() as unsafe.

## [0.6.2] - 2020-06-12
### Changes
- Mark Widget::into<WidgetExt>() as unsafe.
- Add App::windows() method which returs an optional Vector of the application's windows.
- Widget deletion calls app::delete_widget instead of raw delete.
- Add add_emit and insert_emit to MenuExt, also emit to MenuItem.
- Add support for systems without OpenGL using the no-opengl feature flag.

## [0.6.1] - 2020-06-10
### Changes
- Initialize internal FLTK styles on application start.
- Fix use of uninitialized data.
- Remove deprecate set_style_table_entry method, which was replaced by set_highlight_data.
- Impl Copy for the TextBuffer.
- Add WindowExt border and set_border methods.
- Add is_radio and is_checkbox methods to MenuItem.
- Remove WidgetType trait from LabelType and FrameType.

## [0.5.12] - 2020-06-08
### Changes
- Add TextBuffer::unset_buffer() method.
- Deprecated DisplayExt::set_style_table_entry, use set_highlight_data instead.

## [0.5.11] - 2020-06-04
### Changes
- DisplayExt::buffer just returns a manually managed buffer.
- Automatically export fltk::prelude and fltk::enums into the fltk namespace.

## [0.5.10] - 2020-06-02
### Changes
- Fixed typos in method names.
- Fixed use-after-free of TextDisplay StyleTableEntry.
- Enable manual memory management of the style table entry when necessary.
- Add clean way to quit application using App::quit().
- Revert the DisplayExt buffer method to returning a reference.

## [0.5.9] - 2020-06-02 -- YANKED
### Changes
- Fixed typos in method names.
- Fixed use-after-free of TextDisplay StyleTableEntry.
- Make TextBuffer semantics clearer using ManuallyDrop for all methods taking and returning a TextBuffer.
- Enable manual memory management of the style table entry when necessary.
- Add clean way to quit application using App::quit().
- Revert the DisplayExt buffer method to returning a reference.

## [0.5.8] - 2020-06-02 -- YANKED
### Changes
- Fixed typos in method names.
- Fixed use-after-free of TextDisplay StyleTableEntry.
- Make TextBuffer semantics clearer using ManuallyDrop for all methods taking and returning a TextBuffer.
- Enable manual memory management of the style table entry when necessary.
- Add clean way to quit application using App::quit().

## [0.5.7] - 2020-06-01
### Changes
- Add support for windows-gnu fltk-bundled builds.
- Update to latest FLTK.
- Add positions to common dialogs which are now supported by FLTK.

## [0.5.6] - 2020-05-31
### Changes
- Complete methods for the SimpleTerminal struct.
- Add proper cleanup for draw callbacks

## [0.5.5] - 2020-05-30
### Changes
- Add checks for menu clear and clear_submenu operations.
- Add checks for tree clear operations.
- Add MenuExt::remove.
- Important fix to menu item set_label method.

## [0.5.4] - 2020-05-30
### Changes
- Add more checks for widget deletion.
- Add cleanup after menu deletion.
- Remove redundant delete_widget function.
- Add method to iterate menus.
- Add a safe variant to delete and unset callbacks.
- Calls to widget::clear will automatically delete allocated user_data.
- Mark clear methods not acting on FLTK widgets as unsafe.

## [0.5.3] - 2020-05-29
### Changes
- Add a method to unset callbacks.
- Fix double free after acquiring user_data.
- Add a tracker pointer to all widgets.
- Check for use after widget deletion for all operations on widgets.

## [0.5.2] - 2020-05-28
### Changes
- Add Fl_Scroll methods.
- Mark GroupExt clear method as unsafe since it could invalidate underlying widgets.
- Add WidgetExt unsafe methods to acquire user_data and manually delete widgets.
- Add WidgetExt focus methods.

## [0.5.1] - 2020-05-26
### Changes
- Added several methods to MenuExt and Pack.
- Relax callback restrictions.
- Give some more descriptive names for draw methods.
- Revert back to C++11 for the wrapper.
- Allow for custom widget creation, along with example.

## [0.5.0] - 2020-05-26
### Changes
- Image constructors return a Result instead of an Option for all ops.
- Impl Clone for widgets, since they have interior mutability (basically Arc<Mutex<widget>> on the C++ side).
- Systematically return Error when FLTK (C++) returns Error code.
- Add emit method for widgets which take a app::Sender and a message to allow for message passing and shorted callback function. 
- Added the rest of the horizontal valuator widgets.
- Methods return raw pointers are marked as unsafe.
- Impl Error for FltkError.

## [0.4.13] - 2020-05-25
### Changes
- Add support for bundled fltk via the fltk-bundled feature flag.
- Several fixes to Offscreen and GlWindow methods.

## [0.4.12] - 2020-05-24
### Changes
- Translate gl functions exposed via fltk.
- Add mode and set_mode to GlWindow.
- Prefer platfrom gl header.

## [0.4.11] - 2020-05-23
### Changes
- Prefix all draw methods with draw_.
- Add a SharedImage struct.
- Add shown() and raw_handle() methods to WindowExt trait.

## [0.4.10] - 2020-05-22
### Changes
- Remove the necessity for the gl-window feature flag, however on Linux distros, OpenGL headers must be installed.
- Add several handler methods (delete_widget, event_inside_widget, event_inside).
- Add app::delete_widget() for safe widget deletion during event handling.
- Require a C++17 compiler to deal with msvc issues.
- Fix GlWindow conditional compilation.
- Fix GLU linkage on Linux.
- Fix memory leaks from CString.
- Remove unintentional debug message.

## [0.4.9] - 2020-05-21 (YANKED)
### Changes
- Remove the necessity for the gl-window feature flag, however on Linux distros, OpenGL headers must be installed.
- Add several handler methods (delete_widget, event_inside_widget, event_inside).
- Add app::delete_widget() for safe widget deletion during event handling.
- Require a C++17 compiler to deal with msvc issues.
- Fix GlWindow conditional compilation.
- Fix GLU linkage on Linux.

## [0.4.8] - 2020-05-20 (YANKED)
### Changes
- Add several handler methods (delete_widget, event_inside_widget, event_inside).
- Add app::delete_widget() for safe widget deletion during event handling.
- Require a C++17 compiler to deal with msvc issues.
- Fix GlWindow conditional compilation.
- Fix GLU linkage on Linux.

## [0.4.7] - 2020-05-20
### Changes
- Add GlWindow under gl-window feature flag.
- Add draw::show_colormap.
- Add draw methods.
- Add set_cursor method for window types.

## [0.4.6] - 2020-05-20
### Changes
- Add get_items() method to Tree widget.
- Add support for loading images from data/memory using the from_data() method.
- impl Send and Sync for TreeItem and MenuItem.
- Renamed ImageExt to_bytes to to_rgb which is more approprate.
- Added more button and valuator widgets.
- Add scale method to images.

## [0.4.5] - 2020-05-19
### Changes
- Require Rust 1.38 or higher.
- Use type hashing for channels.
- Add support for Trees and TreeItems.
- Add feature to support legacy OpenGL.

## [0.4.4] - 2020-05-15
### Changes
- Added wrapper for program_should_quit signal.
- Free user data after widget destruction.
- Added beeps.
- Require channel messages to also be Send and Sync.

## [0.4.3] - 2020-05-13
### Changes
- Mark internal traits as unsafe.
- Fix operator widget*().
- Add excludes to Cargo.toml.

## [0.4.2] - 2020-05-10
### Changes
- Added timeout callback functions to the app module.
- Added features to use system libjpeg, libpng and zlib instead of bundled ones.
- Added initial support for Drag and Drop operations

## [0.4.1] - 2020-05-07
### Changes
- Fix documentation

## [0.4.0] - 2020-05-07
### Changes
- Reinstated hard requirement of of Copy for sent messages.
- Change Image::new to Image::load when it involves getting an image from the filesystem.
- Make methods involved in loading file return Result.

## [0.3.12] - 2020-05-05
### Changes
- Removed hard requirement of of Copy for sent messages.
- Fix some methods taking an immutable reference to widgets

## [0.3.11] - 2020-05-03
### Changes
- Made app::awake_msg and app::thread_msg private, and are only exposed via app::channel<T>(), where T must implement Copy.
- Added async_std and tokio examples in the examples directory.
- Added CHANGELOG.md to the repository.
- Added FAQ.md to the repository.

## [0.3.10] - 2020-05-02
### Changes
- Added app::add_handler() to handle unhandled events, this takes a non-capturing closure.
- Removed deprecated description() method in FltkError.
- Added app::channel<T>() as well as app::awake_msg and app::thread_msg.
- Added clear and clear_submenu to MenuExt

## [0.3.9] - 2020-04-29
### Changes
- Completed ButtonExt methods and checks.
- Added impl methods for certain button checks (is_checked, is_toggled...etc).
