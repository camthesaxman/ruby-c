int __fastcall berry_script_cmd(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r5@1
  int v3; // r3@1
  int v4; // r4@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v4 = v1[1];
  *(_DWORD *)(a1 + 8) = v1 + 2;
  if ( v3 )
    PlantBerryTree(v2, v3, v4, 0);
  else
    PlantBerryTree(v2, 0, v4, 0);
  return 0;
}
