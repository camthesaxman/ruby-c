int __fastcall sub_813B66C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetMainCallback2((int)sub_808B020);
    v2038561 = 3;
    DestroyTask(v1);
  }
  return v3;
}
