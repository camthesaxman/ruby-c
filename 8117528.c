int __fastcall sub_8117528(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetVBlankCallback(0);
    SetMainCallback2((int)sub_8115384);
    DestroyTask(v1);
  }
  return v3;
}
