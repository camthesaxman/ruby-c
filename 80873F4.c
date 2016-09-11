int sub_80873F4()
{
  unsigned __int8 v0; // r0@3

  if ( !(v202F38F & 0x80) && (unsigned __int8)sub_8054034() == 1 )
  {
    warp_in();
    dword_300485C = (int)mapldr_080851BC;
    SetMainCallback2((int)c2_load_new_map);
    v0 = FindTaskIdByFunc((int)sub_80871D0);
    DestroyTask(v0);
  }
  return 0;
}
