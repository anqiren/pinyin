//
// Created by anqiren on 2020/11/10.
//
#include <vector>
#include <string>

typedef short Int16;
typedef int Int32;
typedef long long int Int64;

class Pinyin {
public:
	static void GetPinyin(const std::string &in, std::vector<std::string> &out, bool isInitials = false);

private:
	static bool IsChinese(wchar_t chr);
	static std::vector<std::string> GetPinyins(wchar_t chr);
	static std::vector<std::string> DecodePinyins(Int64 pinyinCode);
	static std::wstring string2wstring(const std::string & stringIN);
	static std::string wstring2string(const std::wstring &wstringIn);

private:
	static const Int32 MinValue = 12295;
	static const Int32 Part1MinValue = 19968;
	static const Int32 Part1MaxValue = 40869;
	static const Int32 Part2MinValue = 59418;
	static const Int32 Part2MaxValue = 59491;
	static const char *PinyinTable[];
	static const Int64 PinyinCodes[];
	static const Int64 PinyinPart1[];
	static const Int64 PinyinPart2[];
	static const Int64 ling = 175;
};