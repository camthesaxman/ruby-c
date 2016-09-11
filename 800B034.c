int __fastcall sub_800B034(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetMainCallback2((int)c2_load_new_map_2);
    DestroyTask(v1);
  }
  return v3;
}
