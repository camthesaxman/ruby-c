int __fastcall sub_808B338(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r2@2
  int v3; // r4@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    byte_3005CE0 = sub_806CA38(a1);
    v3 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 64, v2);
    DestroyTask(v1);
    sub_80E62A0(4, 36 * v3 + 33718912, sub_808B3EC, 3);
  }
  return v5;
}
