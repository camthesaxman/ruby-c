int __fastcall sub_80874CC(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a1;
  v3 = a2;
  CameraObjectReset2();
  player_bitmagic();
  v202E85E = 1;
  *(_BYTE *)(v3 + 1) |= 0x20u;
  ++*(_WORD *)(v2 + 8);
  return 0;
}
