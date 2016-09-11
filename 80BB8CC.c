int sub_80BB8CC()
{
  unsigned int v0; // r3@1
  int v1; // r4@3
  int v3; // [sp+Ch] [bp-4h]@0

  v202713C = v20387DC;
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33714501) = *(_BYTE *)(v0 + 33705646);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  VarSet(0x4054u, 0);
  v1 = (unsigned __int8)sub_80BB8A8(33705636);
  memset(33714494, 255, 7);
  StringCopyN(33714494, 33705636, v1);
  v202713D = v202713D & 0xEF | 16 * (v2024EAC & 1);
  VarSet(0x4026u, v202E83C);
  return v3;
}
