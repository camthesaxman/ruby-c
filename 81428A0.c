int __fastcall sub_81428A0(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    DestroyTask(a1);
    SetMainCallback2((int)sub_81439D0);
  }
  return v2;
}
