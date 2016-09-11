int __fastcall sub_80A7CF8(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r4@4
  int v3; // r0@4
  int v5; // [sp+0h] [bp-14h]@3
  unsigned int v6; // [sp+4h] [bp-10h]@3
  int v7; // [sp+10h] [bp-4h]@5

  v1 = a1;
  if ( a1 != 42 || sub_80B4940() != 1 )
  {
    v2 = 8 * v1;
    v5 = *(int *)((char *)&off_83C1E20 + v2);
    LOWORD(v6) = 30020;
    LoadCompressedObjectPalette(&v5);
    v3 = *(int *)((char *)&gBerryGraphicsTable + v2);
    sub_800D238();
    sub_80A7CA0(33558528, 0x2000000);
  }
  else
  {
    sub_80A7CA0(33720496, 0x2000000);
    v5 = 33721648;
    v6 = v6 & 0xFFFF0000 | 0x7544;
    LoadSpritePalette((int)&v5);
  }
  return v7;
}
