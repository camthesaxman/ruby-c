int sub_8086C40()
{
  unsigned __int8 v0; // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) && (unsigned __int8)sub_8054034() == 1 )
  {
    sub_80B483C();
    warp_in();
    dword_300485C = (int)sub_8086C94;
    SetMainCallback2((int)c2_load_new_map);
    v0 = FindTaskIdByFunc((int)sub_8086A68);
    DestroyTask(v0);
  }
  return v2;
}
