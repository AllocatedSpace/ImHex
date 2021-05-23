#include <hex/plugin.hpp>

namespace hex::plugin::builtin {

    void registerLanguageEnUS() {
        ContentRegistry::Language::registerLanguage("English (US)", "en-US");

        ContentRegistry::Language::addLocalizations("en-US", {
            /* ImHex default functionality */
                { "hex.menu.file", "File" },
                { "hex.menu.edit", "Edit" },
                { "hex.menu.view", "View" },
                    { "hex.menu.view.fps", "Display FPS" },
                    { "hex.menu.view.demo", "Show ImGui Demo" },
                { "hex.menu.help", "Help" },

                { "hex.welcome.header.main", "Welcome to ImHex" },
                { "hex.welcome.header.start", "Start" },
                    { "hex.welcome.start.open_file", "Open File" },
                    { "hex.welcome.start.open_project", "Open Project" },
                    { "hex.welcome.start.recent", "Recent Files" },
                { "hex.welcome.header.help", "Help" },
                    { "hex.welcome.help.repo", "GitHub Repository" },
                        { "hex.welcome.help.repo.link", "https://github.com/WerWolv/ImHex" },
                    { "hex.welcome.help.gethelp", "Get Help" },
                        { "hex.welcome.help.gethelp.link", "https://github.com/WerWolv/ImHex/discussions/categories/get-help" },
                { "hex.welcome.header.plugins", "Loaded Plugins" },
                    { "hex.welcome.plugins.plugin", "Plugin" },
                    { "hex.welcome.plugins.author", "Author" },
                    { "hex.welcome.plugins.desc", "Description" },
                { "hex.welcome.header.customize", "Customize" },
                    { "hex.welcome.customize.settings.title", "Settings" },
                    { "hex.welcome.customize.settings.desc", "Change preferences of ImHex" },
                { "hex.welcome.header.update", "Updates" },
                    { "hex.welcome.update.title", "New Update available!" },
                    { "hex.welcome.update.desc", "ImHex {0} just released! Download it here." },
                    { "hex.welcome.update.link", "https://github.com/WerWolv/ImHex/releases/latest" },
                { "hex.welcome.header.learn", "Learn" },
                    { "hex.welcome.learn.latest.title", "Latest Release" },
                    { "hex.welcome.learn.latest.desc", "Read ImHex' current changelog" },
                    { "hex.welcome.learn.latest.link", "https://github.com/WerWolv/ImHex/releases/latest" },
                    { "hex.welcome.learn.pattern.title", "Pattern Language Documentation" },
                    { "hex.welcome.learn.pattern.desc", "Learn how to write ImHex patterns with our extensive documentation" },
                    { "hex.welcome.learn.pattern.link", "https://github.com/WerWolv/ImHex/wiki/Pattern-Language-Guide" },
                    { "hex.welcome.learn.plugins.title", "Plugins API" },
                    { "hex.welcome.learn.plugins.desc", "Extend ImHex with additional features using plugins" },
                    { "hex.welcome.learn.plugins.link", "https://github.com/WerWolv/ImHex/wiki/Plugins-Development-Guide" },
                { "hex.welcome.header.various", "Various" },

                { "hex.common.little_endian", "Little Endian" },
                { "hex.common.big_endian", "Big Endian" },
                { "hex.common.decimal", "Decimal" },
                { "hex.common.hexadecimal", "Hexadecimal" },
                { "hex.common.octal", "Octal" },
                { "hex.common.error", "Error" },
                { "hex.common.fatal", "Fatal Error" },
                { "hex.common.address", "Address" },
                { "hex.common.size", "Size" },
                { "hex.common.region", "Region" },
                { "hex.common.match_selection", "Match Selection" },
                { "hex.common.yes", "Yes" },
                { "hex.common.no", "No" },
                { "hex.common.okay", "Okay" },
                { "hex.common.load", "Load" },
                { "hex.common.cancel", "Cancel" },
                { "hex.common.set", "Set" },

                { "hex.view.bookmarks.name", "Bookmarks" },
                    { "hex.view.bookmarks.default_title", "Bookmark [0x{0:X} - 0x{1:X}]" },
                    { "hex.view.bookmarks.no_bookmarks", "No bookmarks created yet. Add one with Edit -> Add Bookmark" },
                    { "hex.view.bookmarks.title.info", "Information" },
                    { "hex.view.bookmarks.address", "0x{0:X} : 0x{1:X} ({2} bytes)" },
                    { "hex.view.bookmarks.button.jump", "Jump to" },
                    { "hex.view.bookmarks.button.remove", "Remove" },
                    { "hex.view.bookmarks.header.name", "Name" },
                    { "hex.view.bookmarks.header.color", "Color" },
                    { "hex.view.bookmarks.header.comment", "Comment" },

                { "hex.view.command_palette.name", "Command Palette" },

                { "hex.view.data_inspector.name", "Data Inspector" },
                    { "hex.view.data_inspector.table.name", "Name" },
                    { "hex.view.data_inspector.table.value", "Value" },

                { "hex.view.data_processor.name", "Data Processor" },
                    { "hex.view.data_processor.menu.remove_selection", "Remove Selected" },
                    { "hex.view.data_processor.menu.remove_node", "Remove Node" },
                    { "hex.view.data_processor.menu.remove_link", "Remove Link" },

                { "hex.view.disassembler.name", "Disassembler" },
                    { "hex.view.disassembler.position", "Position" },
                    { "hex.view.disassembler.base", "Base address" },
                    { "hex.view.disassembler.region", "Code region" },
                    { "hex.view.disassembler.settings.header", "Settings" },
                    { "hex.view.disassembler.arch", "Architecture" },
                        { "hex.view.disassembler.arm.arm", "ARM mode" },
                        { "hex.view.disassembler.arm.thumb", "Thumb mode" },
                        { "hex.view.disassembler.arm.default", "Default mode" },
                        { "hex.view.disassembler.arm.cortex_m", "Cortex-M mode" },
                        { "hex.view.disassembler.arm.armv8", "ARMv8 mode" },

                        { "hex.view.disassembler.mips.mips32", "MIPS32 mode" },
                        { "hex.view.disassembler.mips.mips64", "MIPS64 mode" },
                        { "hex.view.disassembler.mips.mips32R6", "MIPS32R6 mode" },
                        { "hex.view.disassembler.mips.micro", "Micro mode" },

                        { "hex.view.disassembler.x86.16bit", "16-bit mode" },
                        { "hex.view.disassembler.x86.32bit", "32-bit mode" },
                        { "hex.view.disassembler.x86.64bit", "64-bit mode" },

                        { "hex.view.disassembler.ppc.32bit", "32-bit mode" },
                        { "hex.view.disassembler.ppc.64bit", "64-bit mode" },

                        { "hex.view.disassembler.sparc.v9", "Sparc V9 mode" },

                    { "hex.view.disassembler.disassemble", "Disassemble" },
                    { "hex.view.disassembler.disassembling", "Disassembling..." },
                    { "hex.view.disassembler.disassembly.title", "Disassembly" },
                        { "hex.view.disassembler.disassembly.address", "Address" },
                        { "hex.view.disassembler.disassembly.offset", "Offset" },
                        { "hex.view.disassembler.disassembly.bytes", "Byte" },

                { "hex.view.hashes.name", "Hashes" },
                    { "hex.view.hashes.settings", "Settings" },
                    { "hex.view.hashes.function", "Hash function" },
                    { "hex.view.hashes.iv", "Initial value" },
                    { "hex.view.hashes.poly", "Polynomial" },
                    { "hex.view.hashes.result", "Result" },

                { "hex.view.help.name", "Help" },
                    { "hex.view.help.about.name", "About" },
                        { "hex.view.help.about.translator", "Translated by WerWolv" },
                        { "hex.view.help.about.source", "Source code available on GitHub:" },
                        { "hex.view.help.about.donations", "Donations" },
                        { "hex.view.help.about.thanks", "If you like my work, please consider donating to keep the project going. Thanks a lot <3" },
                        { "hex.view.help.about.libs", "Libraries used" },
                        { "hex.view.help.about.paths", "ImHex Directories" },
                    { "hex.view.help.pattern_cheat_sheet", "Pattern Language Cheat Sheet"},
                    { "hex.view.help.calc_cheat_sheet", "Calculator Cheat Sheet" },

                { "hex.view.hexeditor.name", "Hex editor" },
                    { "hex.view.hexeditor.open_file", "Open File" },
                    { "hex.view.hexeditor.open_project", "Open Project" },
                    { "hex.view.hexeditor.save_project", "Save Project" },
                    { "hex.view.hexeditor.save_data", "Save Data" },
                    { "hex.view.hexeditor.open_base64", "Open Base64 File" },
                    { "hex.view.hexeditor.load_enconding_file", "Load custom encoding File" },
                    { "hex.view.hexeditor.page", "Page {0} / {1}" },
                    { "hex.view.hexeditor.save_as", "Save As" },
                    { "hex.view.hexeditor.exit_application.title", "Exit Application?" },
                    { "hex.view.hexeditor.exit_application.desc", "You have unsaved changes made to your Project.\nAre you sure you want to exit?" },
                    { "hex.view.hexeditor.script.title", "Load File with Loader Script" },
                    { "hex.view.hexeditor.script.desc", "Load a file using a Python loader script." },
                    { "hex.view.hexeditor.script.script", "Script" },
                        { "hex.view.hexeditor.script.script.title", "Loader Script: Open Script" },
                    { "hex.view.hexeditor.script.file", "File" },
                    { "hex.view.hexeditor.script.file.title", "Loader Script: Open File" },

                    { "hex.view.hexeditor.menu.file.open_file", "Open File..." },
                    { "hex.view.hexeditor.menu.file.open_recent", "Open Recent"},
                    { "hex.view.hexeditor.menu.file.save", "Save" },
                    { "hex.view.hexeditor.menu.file.save_as", "Save As..." },
                    { "hex.view.hexeditor.menu.file.close", "Close" },
                    { "hex.view.hexeditor.menu.file.open_project", "Open Project..." },
                    { "hex.view.hexeditor.menu.file.save_project", "Save Project..." },
                    { "hex.view.hexeditor.menu.file.load_encoding_file", "Load custom encoding..." },
                    { "hex.view.hexeditor.menu.file.import", "Import..." },
                        { "hex.view.hexeditor.menu.file.import.base64", "Base64 File" },
                        { "hex.view.hexeditor.base64.import_error", "File is not in a valid Base64 format!" },
                        { "hex.view.hexeditor.file_open_error", "Failed to open file!" },
                        { "hex.view.hexeditor.menu.file.import.ips", "IPS Patch" },
                        { "hex.view.hexeditor.menu.file.import.ips32", "IPS32 Patch" },
                        { "hex.view.hexeditor.menu.file.import.script", "File with Loader Script" },

                    { "hex.view.hexeditor.menu.file.export", "Export..." },
                        { "hex.view.hexeditor.menu.file.export.title", "Export File" },
                        { "hex.view.hexeditor.menu.file.export.ips", "IPS Patch" },
                        { "hex.view.hexeditor.menu.file.export.ips32", "IPS32 Patch" },
                    { "hex.view.hexeditor.menu.file.search", "Search" },
                        { "hex.view.hexeditor.search.string", "String" },
                        { "hex.view.hexeditor.search.hex", "Hex" },
                        { "hex.view.hexeditor.search.find", "Find" },
                        { "hex.view.hexeditor.search.find_next", "Find next" },
                        { "hex.view.hexeditor.search.find_prev", "Find previous" },
                    { "hex.view.hexeditor.menu.file.goto", "Goto" },
                        { "hex.view.hexeditor.goto.offset.absolute", "Absolute" },
                        { "hex.view.hexeditor.goto.offset.current", "Current" },
                        { "hex.view.hexeditor.goto.offset.begin", "Begin" },
                        { "hex.view.hexeditor.goto.offset.end", "End" },
                    { "hex.view.hexeditor.error.read_only", "Couldn't get write access. File opened in read-only mode." },
                    { "hex.view.hexeditor.error.open", "Failed to open file!" },
                    { "hex.view.hexeditor.menu.edit.undo", "Undo" },
                    { "hex.view.hexeditor.menu.edit.redo", "Redo" },
                    { "hex.view.hexeditor.menu.edit.copy", "Copy" },
                    { "hex.view.hexeditor.menu.edit.copy_as", "Copy as..." },
                        { "hex.view.hexeditor.copy.hex", "String" },
                        { "hex.view.hexeditor.copy.c", "C Array" },
                        { "hex.view.hexeditor.copy.cpp", "C++ Array" },
                        { "hex.view.hexeditor.copy.csharp", "C# Array" },
                        { "hex.view.hexeditor.copy.rust", "Rust Array" },
                        { "hex.view.hexeditor.copy.python", "Python Array" },
                        { "hex.view.hexeditor.copy.java", "Java Array" },
                        { "hex.view.hexeditor.copy.js", "JavaScript Array" },
                        { "hex.view.hexeditor.copy.ascii", "ASCII Art" },
                        { "hex.view.hexeditor.copy.html", "HTML" },
                    { "hex.view.hexeditor.menu.edit.paste", "Paste" },
                    { "hex.view.hexeditor.menu.edit.bookmark", "Create bookmark" },
                    { "hex.view.hexeditor.menu.edit.set_base", "Set base address" },

                { "hex.view.information.name", "Data Information" },
                    { "hex.view.information.control", "Control" },
                    { "hex.view.information.analyze", "Analyze page" },
                    { "hex.view.information.analyzing", "Analyzing..." },
                    { "hex.view.information.region", "Analyzed region" },
                    { "hex.view.information.magic", "Magic information" },
                    { "hex.view.information.description", "Description:" },
                    { "hex.view.information.mime", "MIME Type:" },
                    { "hex.view.information.info_analysis", "Information analysis" },
                    { "hex.view.information.distribution", "Byte distribution" },
                    { "hex.view.information.entropy", "Entropy" },
                    { "hex.view.information.block_size", "Block size" },
                    { "hex.view.information.block_size.desc", "{0} blocks of {1} bytes" },
                    { "hex.view.information.file_entropy", "File entropy" },
                    { "hex.view.information.highest_entropy", "Highest entropy block" },
                    { "hex.view.information.encrypted", "This data is most likely encrypted or compressed!" },

                { "hex.view.patches.name", "Patches" },
                    { "hex.view.patches.offset", "Offset" },
                    { "hex.view.patches.orig", "Original value" },
                    { "hex.view.patches.patch", "Patched value"},
                    { "hex.view.patches.remove", "Remove patch" },

                { "hex.view.pattern.name", "Pattern editor" },
                { "hex.view.pattern.accept_pattern", "Accept pattern" },
                    { "hex.view.pattern.accept_pattern.desc", "One or more patterns compatible with this data type has been found" },
                    { "hex.view.pattern.accept_pattern.patterns", "Patterns" },
                    { "hex.view.pattern.accept_pattern.question", "Do you want to apply the selected pattern?" },
                { "hex.view.pattern.menu.file.load_pattern", "Load pattern..." },
                { "hex.view.pattern.open_pattern", "Open pattern" },
                { "hex.view.pattern.evaluating", "Evaluating..." },
                { "hex.view.pattern.auto", "Auto evaluate" },

                { "hex.view.pattern_data.name", "Pattern Data" },
                    { "hex.view.pattern_data.name", "Name" },
                    { "hex.view.pattern_data.color", "Color" },
                    { "hex.view.pattern_data.offset", "Offset" },
                    { "hex.view.pattern_data.size", "Size" },
                    { "hex.view.pattern_data.type", "Type" },
                    { "hex.view.pattern_data.value", "Value" },

                { "hex.view.settings.name", "Settings" },

                { "hex.view.strings.name", "Strings" },
                    { "hex.view.strings.copy", "Copy string" },
                    { "hex.view.strings.demangle", "Demangle" },
                    { "hex.view.strings.min_length", "Minimum length" },
                    { "hex.view.strings.filter", "Filter" },
                    { "hex.view.strings.extract", "Extract" },
                    { "hex.view.strings.searching", "Searching..." },
                    { "hex.view.strings.offset", "Offset" },
                    { "hex.view.strings.size", "Size" },
                    { "hex.view.strings.string", "String" },
                    { "hex.view.strings.demangle.title", "Demangled name" },
                    { "hex.view.strings.demangle.copy", "Copy" },

                { "hex.view.tools.name", "Tools" },

                { "hex.view.yara.name", "Yara Rules" },
                    { "hex.view.yara.header.rules", "Rules" },
                        { "hex.view.yara.reload", "Reload" },
                        { "hex.view.yara.match", "Match Rules" },
                        { "hex.view.yara.matching", "Matching..." },
                        { "hex.view.yara.error", "Yara Compiler error: " },
                    { "hex.view.yara.header.matches", "Matches" },
                        { "hex.view.yara.matches.identifier", "Identifier" },
                        { "hex.view.yara.whole_data", "Whole file matches!" },
                        { "hex.view.yara.no_rules", "No YARA rules found. Put them in ImHex' 'yara' folder" },

            /* Builtin plugin features */

                { "hex.builtin.command.calc.desc", "Calculator" },
                { "hex.builtin.command.web.desc", "Website lookup" },
                { "hex.builtin.command.web.result", "Navigate to '{0}'"},

                { "hex.builtin.inspector.binary", "Binary (8 bit)" },
                { "hex.builtin.inspector.u8", "uint8_t" },
                { "hex.builtin.inspector.s8", "int8_t" },
                { "hex.builtin.inspector.u16", "uint16_t" },
                { "hex.builtin.inspector.s16", "int16_t" },
                { "hex.builtin.inspector.u32", "uint32_t" },
                { "hex.builtin.inspector.s32", "int32_t" },
                { "hex.builtin.inspector.u64", "uint64_t" },
                { "hex.builtin.inspector.s64", "int64_t" },
                { "hex.builtin.inspector.float", "float (32 bit)" },
                { "hex.builtin.inspector.double", "double (64 bit)" },
                { "hex.builtin.inspector.ascii", "ASCII Character" },
                { "hex.builtin.inspector.wide", "Wide Character" },
                { "hex.builtin.inspector.utf8", "UTF-8 code point" },
                { "hex.builtin.inspector.time32", "__time32_t" },
                { "hex.builtin.inspector.time64", "__time64_t" },
                { "hex.builtin.inspector.time", "time_t" },
                { "hex.builtin.inspector.guid", "GUID" },
                { "hex.builtin.inspector.rgba8", "RGBA8 color" },

                { "hex.builtin.nodes.constants", "Constants" },
                    { "hex.builtin.nodes.constants.int", "Integer" },
                        { "hex.builtin.nodes.constants.int.header", "Integer" },
                        { "hex.builtin.nodes.constants.int.output", "" },
                    { "hex.builtin.nodes.constants.float", "Float" },
                        { "hex.builtin.nodes.constants.float.header", "Float" },
                        { "hex.builtin.nodes.constants.float.output", "" },
                    { "hex.builtin.nodes.constants.nullptr", "Nullptr" },
                        { "hex.builtin.nodes.constants.nullptr.header", "Nullptr" },
                        { "hex.builtin.nodes.constants.nullptr.output", "" },
                    { "hex.builtin.nodes.constants.buffer", "Buffer" },
                        { "hex.builtin.nodes.constants.buffer.header", "Buffer" },
                        { "hex.builtin.nodes.constants.buffer.size", "Size" },
                        { "hex.builtin.nodes.constants.buffer.output", "" },
                    { "hex.builtin.nodes.constants.string", "String" },
                        { "hex.builtin.nodes.constants.string.header", "String" },
                        { "hex.builtin.nodes.constants.string.output", "" },
                    { "hex.builtin.nodes.constants.rgba8", "RGBA8 color" },
                        { "hex.builtin.nodes.constants.rgba8.header", "RGBA8 color" },
                        { "hex.builtin.nodes.constants.rgba8.output.r", "Red" },
                        { "hex.builtin.nodes.constants.rgba8.output.g", "Green" },
                        { "hex.builtin.nodes.constants.rgba8.output.b", "Blue" },
                        { "hex.builtin.nodes.constants.rgba8.output.a", "Alpha" },
                    { "hex.builtin.nodes.constants.comment", "Comment" },
                        { "hex.builtin.nodes.constants.comment.header", "Comment" },

                { "hex.builtin.nodes.display", "Display" },
                    { "hex.builtin.nodes.display.int", "Integer" },
                        { "hex.builtin.nodes.display.int.header", "Integer display" },
                        { "hex.builtin.nodes.display.int.input", "Value" },
                    { "hex.builtin.nodes.display.float", "Float" },
                        { "hex.builtin.nodes.display.float.header", "Float display" },
                        { "hex.builtin.nodes.display.float.input", "Value" },

                { "hex.builtin.nodes.data_access", "Data access" },
                    { "hex.builtin.nodes.data_access.read", "Read" },
                        { "hex.builtin.nodes.data_access.read.header", "Read" },
                        { "hex.builtin.nodes.data_access.read.address", "Address" },
                        { "hex.builtin.nodes.data_access.read.size", "Size" },
                        { "hex.builtin.nodes.data_access.read.data", "Data" },
                    { "hex.builtin.nodes.data_access.write", "Write" },
                        { "hex.builtin.nodes.data_access.write.header", "Write" },
                        { "hex.builtin.nodes.data_access.write.address", "Address" },
                        { "hex.builtin.nodes.data_access.write.data", "Data" },
                    { "hex.builtin.nodes.data_access.size", "Data Size"},
                        { "hex.builtin.nodes.data_access.size.header", "Data Size"},
                        { "hex.builtin.nodes.data_access.size.size", "Size"},

                { "hex.builtin.nodes.casting", "Data conversion" },
                    { "hex.builtin.nodes.casting.int_to_buffer", "Integer to Buffer" },
                        { "hex.builtin.nodes.casting.int_to_buffer.header", "Integer to Buffer" },
                        { "hex.builtin.nodes.casting.int_to_buffer.input", "In" },
                        { "hex.builtin.nodes.casting.int_to_buffer.output", "Out" },
                { "hex.builtin.nodes.casting.buffer_to_int", "Buffer to Integer" },
                        { "hex.builtin.nodes.casting.buffer_to_int.header", "Buffer to Integer" },
                        { "hex.builtin.nodes.casting.buffer_to_int.input", "In" },
                        { "hex.builtin.nodes.casting.buffer_to_int.output", "Out" },

                { "hex.builtin.nodes.arithmetic", "Arithmetic" },
                    { "hex.builtin.nodes.arithmetic.add", "Addition" },
                        { "hex.builtin.nodes.arithmetic.add.header", "Add" },
                        { "hex.builtin.nodes.arithmetic.add.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.add.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.add.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.sub", "Subtraction" },
                        { "hex.builtin.nodes.arithmetic.sub.header", "Subtract" },
                        { "hex.builtin.nodes.arithmetic.sub.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.sub.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.sub.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.mul", "Multiplication" },
                        { "hex.builtin.nodes.arithmetic.mul.header", "Multiply" },
                        { "hex.builtin.nodes.arithmetic.mul.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.mul.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.mul.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.div", "Division" },
                        { "hex.builtin.nodes.arithmetic.div.header", "Divide" },
                        { "hex.builtin.nodes.arithmetic.div.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.div.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.div.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.mod", "Modulus" },
                        { "hex.builtin.nodes.arithmetic.mod.header", "Modulo" },
                        { "hex.builtin.nodes.arithmetic.mod.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.mod.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.mod.output", "Output" },

                { "hex.builtin.nodes.buffer", "Buffer" },
                    { "hex.builtin.nodes.buffer.combine", "Combine" },
                        { "hex.builtin.nodes.buffer.combine.header", "Combine buffers" },
                        { "hex.builtin.nodes.buffer.combine.input.a", "Input A" },
                        { "hex.builtin.nodes.buffer.combine.input.b", "Input B" },
                        { "hex.builtin.nodes.buffer.combine.output", "Output" },
                    { "hex.builtin.nodes.buffer.slice", "Slice" },
                        { "hex.builtin.nodes.buffer.slice.header", "Slice buffer" },
                        { "hex.builtin.nodes.buffer.slice.input.buffer", "Input" },
                        { "hex.builtin.nodes.buffer.slice.input.from", "From" },
                        { "hex.builtin.nodes.buffer.slice.input.to", "To" },
                        { "hex.builtin.nodes.buffer.slice.output", "Output" },
                    { "hex.builtin.nodes.buffer.repeat", "Repeat" },
                        { "hex.builtin.nodes.buffer.repeat.header", "Repeat buffer" },
                        { "hex.builtin.nodes.buffer.repeat.input.buffer", "Input" },
                        { "hex.builtin.nodes.buffer.repeat.input.count", "Count" },
                        { "hex.builtin.nodes.buffer.repeat.output", "Output" },

                { "hex.builtin.nodes.control_flow", "Control flow" },
                    { "hex.builtin.nodes.control_flow.if", "If" },
                        { "hex.builtin.nodes.control_flow.if.header", "If" },
                        { "hex.builtin.nodes.control_flow.if.condition", "Condition" },
                        { "hex.builtin.nodes.control_flow.if.true", "True" },
                        { "hex.builtin.nodes.control_flow.if.false", "False" },
                        { "hex.builtin.nodes.control_flow.if.output", "Output" },
                    { "hex.builtin.nodes.control_flow.equals", "Equals" },
                        { "hex.builtin.nodes.control_flow.equals.header", "Equals" },
                        { "hex.builtin.nodes.control_flow.equals.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.equals.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.equals.output", "Output" },
                    { "hex.builtin.nodes.control_flow.not", "Not" },
                        { "hex.builtin.nodes.control_flow.not.header", "Not" },
                        { "hex.builtin.nodes.control_flow.not.input", "Input" },
                        { "hex.builtin.nodes.control_flow.not.output", "Output" },
                    { "hex.builtin.nodes.control_flow.gt", "Greater than" },
                        { "hex.builtin.nodes.control_flow.gt.header", "Greater than" },
                        { "hex.builtin.nodes.control_flow.gt.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.gt.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.gt.output", "Output" },
                    { "hex.builtin.nodes.control_flow.lt", "Less than" },
                        { "hex.builtin.nodes.control_flow.lt.header", "Less than" },
                        { "hex.builtin.nodes.control_flow.lt.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.lt.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.lt.output", "Output" },
                    { "hex.builtin.nodes.control_flow.and", "AND" },
                        { "hex.builtin.nodes.control_flow.and.header", "Boolean AND" },
                        { "hex.builtin.nodes.control_flow.and.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.and.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.and.output", "Output" },
                    { "hex.builtin.nodes.control_flow.or", "OR" },
                        { "hex.builtin.nodes.control_flow.or.header", "Boolean OR" },
                        { "hex.builtin.nodes.control_flow.or.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.or.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.or.output", "Output" },

                { "hex.builtin.nodes.bitwise", "Bitwise operations" },
                    { "hex.builtin.nodes.bitwise.and", "AND" },
                        { "hex.builtin.nodes.bitwise.and.header", "Bitwise AND" },
                        { "hex.builtin.nodes.bitwise.and.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.and.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.and.output", "Output" },
                    { "hex.builtin.nodes.bitwise.or", "OR" },
                        { "hex.builtin.nodes.bitwise.or.header", "Bitwise OR" },
                        { "hex.builtin.nodes.bitwise.or.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.or.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.or.output", "Output" },
                    { "hex.builtin.nodes.bitwise.xor", "XOR" },
                        { "hex.builtin.nodes.bitwise.xor.header", "Bitwise XOR" },
                        { "hex.builtin.nodes.bitwise.xor.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.xor.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.xor.output", "Output" },
                    { "hex.builtin.nodes.bitwise.not", "NOT" },
                        { "hex.builtin.nodes.bitwise.not.header", "Bitwise NOT" },
                        { "hex.builtin.nodes.bitwise.not.input", "Input" },
                        { "hex.builtin.nodes.bitwise.not.output", "Output" },

                { "hex.builtin.nodes.decoding", "Decoding" },
                    { "hex.builtin.nodes.decoding.base64", "Base64" },
                        { "hex.builtin.nodes.decoding.base64.header", "Base64 decoder" },
                        { "hex.builtin.nodes.decoding.base64.input", "In" },
                        { "hex.builtin.nodes.decoding.base64.output", "Out" },
                    { "hex.builtin.nodes.decoding.hex", "Hexadecimal" },
                        { "hex.builtin.nodes.decoding.hex.header", "Hexadecimal decoder" },
                        { "hex.builtin.nodes.decoding.hex.input", "In" },
                        { "hex.builtin.nodes.decoding.hex.output", "Out" },

                { "hex.builtin.nodes.crypto", "Cryptography" },
                    { "hex.builtin.nodes.crypto.aes", "AES Decryptor" },
                        { "hex.builtin.nodes.crypto.aes.header", "AES Decryptor" },
                        { "hex.builtin.nodes.crypto.aes.key", "Key" },
                        { "hex.builtin.nodes.crypto.aes.iv", "IV" },
                        { "hex.builtin.nodes.crypto.aes.nonce", "Nonce" },
                        { "hex.builtin.nodes.crypto.aes.input", "Input" },
                        { "hex.builtin.nodes.crypto.aes.output", "Output" },
                        { "hex.builtin.nodes.crypto.aes.mode", "Mode" },
                        { "hex.builtin.nodes.crypto.aes.key_length", "Key length" },



                { "hex.builtin.tools.demangler", "Itanium/MSVC demangler" },
                    { "hex.builtin.tools.demangler.mangled", "Mangled name" },
                    { "hex.builtin.tools.demangler.demangled", "Demangled name" },
                { "hex.builtin.tools.ascii_table", "ASCII table" },
                    { "hex.builtin.tools.ascii_table.octal", "Show octal" },
                { "hex.builtin.tools.regex_replacer", "Regex replacer" },
                    { "hex.builtin.tools.regex_replacer.pattern", "Regex pattern" },
                    { "hex.builtin.tools.regex_replacer.replace", "Replace pattern" },
                    { "hex.builtin.tools.regex_replacer.input", "Input" },
                    { "hex.builtin.tools.regex_replacer.output", "Output" },
                { "hex.builtin.tools.color", "Color picker" },
                { "hex.builtin.tools.calc", "Calculator" },
                    { "hex.builtin.tools.input", "Input" },
                    { "hex.builtin.tools.format.standard", "Standard" },
                    { "hex.builtin.tools.format.scientific", "Scientific" },
                    { "hex.builtin.tools.format.engineering", "Engineering" },
                    { "hex.builtin.tools.format.programmer", "Programmer" },
                    { "hex.builtin.tools.error", "Last error: '{0}'" },
                    { "hex.builtin.tools.history", "History" },
                    { "hex.builtin.tools.name", "Name" },
                    { "hex.builtin.tools.value", "Value" },
                { "hex.builtin.tools.base_converter", "Base converter" },
                    { "hex.builtin.tools.base_converter.dec", "DEC" },
                    { "hex.builtin.tools.base_converter.hex", "HEX" },
                    { "hex.builtin.tools.base_converter.oct", "OCT" },
                    { "hex.builtin.tools.base_converter.bin", "BIN" },

                { "hex.builtin.setting.imhex", "ImHex" },
                    { "hex.builtin.setting.imhex.recent_files", "Recent Files" },
                { "hex.builtin.setting.interface", "Interface" },
                    { "hex.builtin.setting.interface.color", "Color theme" },
                        { "hex.builtin.setting.interface.color.dark", "Dark" },
                        { "hex.builtin.setting.interface.color.light", "Light" },
                        { "hex.builtin.setting.interface.color.classic", "Classic" },
                    { "hex.builtin.setting.interface.language", "Language" },
                    { "hex.builtin.setting.interface.fps", "FPS Limit" },
                    { "hex.builtin.setting.interface.highlight_alpha", "Highlighting opacity" },

                { "hex.builtin.provider.file.path", "File path" },
                { "hex.builtin.provider.file.size", "Size" },
                { "hex.builtin.provider.file.creation", "Creation time" },
                { "hex.builtin.provider.file.access", "Last access time" },
                { "hex.builtin.provider.file.modification", "Last modification time" },
        });
    }

}