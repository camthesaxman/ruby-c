int __fastcall sub_808A848(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned __int8 v2; // r0@2
  int v3; // r2@2
  int v4; // r4@2
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = sub_806CA38(a1);
    v4 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * v2], 64, v3);
    DestroyTask(v1);
    sub_80F890C(36 * v4 + 33718912, sub_808A8A8, 1);
  }
  return v6;
}
