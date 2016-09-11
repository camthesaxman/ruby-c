int __fastcall sub_80A2178(int a1)
{
  unsigned __int8 v1; // r0@1
  unsigned __int8 v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = sub_80A21E0(a1);
  v2 = v1;
  if ( v1 != 255 )
  {
    sub_80A2408(v1);
    DestroyTask(v2);
  }
  return v4;
}
