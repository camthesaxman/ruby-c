int sub_8136174()
{
  int v0; // r1@1
  char v1; // r1@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = v2039304;
  *(_DWORD *)(v2039304 + 8) = v203930C;
  *(_DWORD *)(v0 + 4) = v2039308;
  v2039310 = sub_81370E4(v2039310);
  v1 = 0;
  if ( v2039310 > 3u )
    v1 = 1;
  *(_BYTE *)(v2039304 + 86) = v1;
  v200D162 = 2;
  launch_c3_walk_stairs_and_run_once(sub_8136294);
  SetMainCallback2((int)sub_81361E4);
  return v3;
}
