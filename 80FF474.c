int sub_80FF474()
{
  unsigned int v0; // r6@1
  int v1; // r5@2
  unsigned int v2; // r2@3
  int v3; // r4@7
  int v5; // [sp+20h] [bp-4h]@0

  v0 = 0;
  while ( 1 )
  {
    v1 = v0 + 174;
    if ( (unsigned __int8)FlagGet(v0 + 174) == 1 )
      break;
    v0 = (v0 + 1) & 0xFF;
    if ( v0 > 0xD )
      return v5;
  }
  FlagReset(v0 + 174);
  v2 = 0;
  if ( (unsigned int)*v202E82C > 0 && *(_WORD *)(*(_DWORD *)(v202E82C + 4) + 20) != v1 )
  {
    do
      v2 = (v2 + 1) & 0xFF;
    while ( v2 < *v202E82C && *(_WORD *)(24 * v2 + *(_DWORD *)(v202E82C + 4) + 20) != v1 );
  }
  v3 = 24 * v2;
  VarSet(*(_BYTE *)(24 * v2 + *(_DWORD *)(v202E82C + 4) + 1) + 16160, **(_WORD **)(v2038900 + 28));
  v202E8CE = *(_BYTE *)(v3 + *(_DWORD *)(v202E82C + 4));
  v202E8D0 = v20391A4;
  v202E8D2 = v20391A6;
  show_sprite(v202E8CE, v2025739, v2025738);
  sub_805C0F8(v202E8CE, v2025739, v2025738, v202E8D0, v202E8D2);
  sub_805C78C(v202E8CE, v2025739, v2025738);
  return v5;
}
