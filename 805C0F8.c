int __fastcall sub_805C0F8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int16 a4, int a5)
{
  int v5; // r5@1
  unsigned __int8 v7; // [sp+0h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-4h]@3

  v5 = a4;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v7) << 24) )
    sub_805C058(
      (int)&dword_30048A0[9 * v7],
      (unsigned int)((v5 << 16) + 458752) >> 16,
      (unsigned int)((a5 << 16) + 458752) >> 16);
  return v8;
}
