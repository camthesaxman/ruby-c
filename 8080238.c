int sub_8080238()
{
  unsigned int v0; // r7@2
  unsigned __int8 v1; // r0@3
  int v2; // r4@4
  char *v3; // r2@4
  int v5; // [sp+1Ch] [bp-4h]@0

  if ( !v202FEFF )
  {
    v0 = 0;
    do
    {
      v1 = CreateSpriteAtEnd((int)&gSpriteTemplate_839AC3C, (signed __int16)(48 * v0 + 24), 208);
      if ( v1 == 64 )
      {
        *(_DWORD *)(4 * v0 + 0x202F9C8) = 0;
      }
      else
      {
        v2 = 4 * v0 + 33749448;
        v3 = &gSprites[68 * v1];
        *(_DWORD *)v2 = v3;
        v3[3] = v3[3] & 0x3F | 0x80;
        *(_WORD *)(*(_DWORD *)v2 + 48) = 51 * v0;
        *(_WORD *)(*(_DWORD *)v2 + 46) = 8;
        *(_WORD *)(*(_DWORD *)v2 + 50) = 0;
        *(_WORD *)(*(_DWORD *)v2 + 54) = 26416;
        *(_WORD *)(*(_DWORD *)v2 + 52) = gUnknown_0839AC5C[v0];
        StartSpriteAnim(*(_DWORD *)(4 * v0 + 0x202F9C8), 1);
        CalcCenterToCornerVec(*(_DWORD *)(4 * v0 + 0x202F9C8), 0, 2, 0);
        *(_DWORD *)(*(_DWORD *)v2 + 28) = sub_8080398;
      }
      v202FEFF = 1;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 4 );
  }
  return v5;
}
