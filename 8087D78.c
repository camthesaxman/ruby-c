int sub_8087D78()
{
  unsigned __int8 v0; // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) && (unsigned __int8)sub_8054034() == 1 )
  {
    sub_8053570();
    warp_in();
    SetMainCallback2((int)c2_load_new_map);
    dword_300485C = (int)mapldr_08085D88;
    v0 = FindTaskIdByFunc((int)sub_8087BBC);
    DestroyTask(v0);
  }
  return v2;
}
