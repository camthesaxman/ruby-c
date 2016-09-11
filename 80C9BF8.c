int __fastcall unref_sub_80C9BF8(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@2
  int v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( LOWORD(dword_3004B20[10 * a1 + 3]) )
  {
    v3 = itemid_get_x28(v203855E);
    DisplayItemMessageOnField(v1, *(void **)((char *)&gUnknown_083D61DC + (4 * v3 & 0x3FF)), sub_80C9BD8, 0);
  }
  else
  {
    MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
    v2 = itemid_get_x28(v203855E);
    DisplayItemMessageOnField(v1, *(void **)((char *)&gUnknown_083D61DC + (4 * v2 & 0x3FF)), sub_80C9BB8, 1);
  }
  return v5;
}
