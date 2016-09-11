int __fastcall sub_80E8958(char a1)
{
  char v1; // r7@1
  signed __int16 v2; // r9@2
  unsigned int v3; // r4@5
  int v4; // r3@6
  unsigned int v5; // r4@9
  int v6; // r2@10
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( a1 )
  {
    v2 = 120;
    v200AC6C = 33597993;
    v200AC71 = v200AA28 - 4;
    v3 = 0;
    do
    {
      v4 = 4 * v3 + 33558708;
      *(_BYTE *)(*(_DWORD *)v4 + 62) &= 0xFBu;
      *(_WORD *)(*(_DWORD *)v4 + 48) = 1;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 1 );
  }
  else
  {
    v2 = 100;
    v200AC6C = 33558965;
    if ( v2001026 )
      v200AC71 = 0;
    else
      v200AC71 = v20011B6 - 4;
  }
  if ( v200AC71 < 0 )
    v200AC71 = 0;
  v5 = 0;
  do
  {
    v6 = 4 * v5 + 33558700;
    *(_WORD *)(*(_DWORD *)v6 + 32) = v2;
    *(_BYTE *)(*(_DWORD *)v6 + 62) &= 0xFBu;
    *(_WORD *)(*(_DWORD *)v6 + 48) = 1;
    StartSpriteAnim(*(_DWORD *)(4 * v5 + 0x20010AC), v1);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 1 );
  v200AC70 = 1;
  return v8;
}
