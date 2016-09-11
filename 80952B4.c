int __fastcall sub_80952B4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_8094D60();
    DestroyTask(v1);
    SetMainCallback2((int)sub_802E414);
  }
  return v3;
}
