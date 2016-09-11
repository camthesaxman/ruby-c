int sub_804D588()
{
  char *v0; // r1@4
  char v1; // r0@4
  int v2; // r4@5
  int v3; // r0@12
  int v5; // [sp+14h] [bp-4h]@0

  if ( !byte_3001BAC )
  {
    byte_3001BAC = 4;
    v0 = &gUnknown_3001BB4;
    v1 = 1;
_0804D612:
    *v0 = v1;
    goto _0804D614;
  }
  if ( byte_3001BAC == 4 )
  {
    dword_3005E94 = (int)sub_804DC88;
    v2 = (unsigned __int16)GetEvolutionTargetSpecies((int)&dword_3004360[25 * v20297D8], 1u, 0);
    if ( v2 )
      sub_81120E4(&dword_3004360[25 * v20297D8], v2, *(_BYTE *)(dword_3004828 + 185));
    else
      SetMainCallback2((int)sub_804DC88);
    v0 = (char *)33724376;
    v1 = -1;
    goto _0804D612;
  }
_0804D614:
  if ( !(HasLinkErrorOccurred() << 24) )
    RunTasks(0);
  AnimateSprites();
  v3 = BuildOamBuffer();
  UpdatePaletteFade(v3);
  return v5;
}
