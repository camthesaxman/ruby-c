signed int __fastcall unref_sub_8124F94(int a1)
{
  __int16 v2; // [sp+0h] [bp-4h]@1

  *(_BYTE *)(a1 + 1) = 0;
  *(_BYTE *)a1 = 0;
  *(_WORD *)(a1 + 2) = 0;
  *(_DWORD *)(a1 + 4) = 100663296;
  v40000D4 = &v2;
  v40000D8 = a1 + 136;
  v40000DC = -2130706240;
  return -2130706240;
}
