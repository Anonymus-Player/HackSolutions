#include <assert.h>
#include <CString.hpp>

int main()
{
    // UTF-8 to UTF-32
    {
        const hsd::char32* expected = U"🌠";
        const hsd::char8* test = u8"🌠";
        hsd::char32 result[2]{};

        hsd::to_utf32(result, test);
        assert(hsd::u32cstring::compare(result, expected) == 0);
    }

    // UTF-32 to UTF-8
    {
        const hsd::char32* test = U"🌠";
        const hsd::char8* expected = u8"🌠";
        hsd::char8 result[5]{};

        hsd::to_utf8(result, test);
        assert(hsd::u8cstring::compare(result, expected) == 0);
    }

    // UTF-8 to UTF-16
    {
        const hsd::char16* expected = u"🌠";
        const hsd::char8* test = u8"🌠";
        hsd::char16 result[3]{};

        hsd::to_utf16(result, test);
        assert(hsd::u16cstring::compare(result, expected) == 0);
    }

    // UTF-16 to UTF-8
    {
        const hsd::char16* test = u"🌠";
        const hsd::char8* expected = u8"🌠";
        hsd::char8 result[5]{};

        hsd::to_utf8(result, test);
        assert(hsd::u8cstring::compare(result, expected) == 0);
    }

    // UTF-16 to UTF-32
    {
        const hsd::char32* expected = U"🌠";
        const hsd::char16* test = u"🌠";
        hsd::char32 result[2]{};

        hsd::to_utf32(result, test);
        assert(hsd::u32cstring::compare(result, expected) == 0);
    }

    // UTF-32 to UTF-16
    {
        const hsd::char16* expected = u"🌠";
        const hsd::char32* test = U"🌠";
        hsd::char16 result[3]{};

        hsd::to_utf16(result, test);
        assert(hsd::u16cstring::compare(result, expected) == 0);
    }
}