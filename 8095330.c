int __fastcall sub_8095330(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_8094D60();
    v2 = DestroyTask(v1);
    sub_80A6DCC(v2);
  }
  return v4;
}
