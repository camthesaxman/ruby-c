int __fastcall sub_810C1C8(unsigned __int8 a1, int a2)
{
  __int16 v2; // r6@1
  int *v3; // r0@3
  unsigned int v4; // r2@5
  int v5; // r0@5
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = 4101;
  if ( !(a2 << 24) )
    v2 = 5;
  v3 = &dword_3004B20[10 * a1];
  if ( ((*((_WORD *)v3 + 4) - v2039249) & 0xFFFFu) <= 8 && (signed __int16)(*((_WORD *)v3 + 4) - v2039249) != v2039248 )
  {
    v4 = 0;
    v5 = 2 * (signed __int16)(*((_WORD *)v3 + 4) - v2039249);
    do
    {
      gBG2TilemapBuffer[32 * (v5 + 1) + v4 + 15] = v2;
      gBG2TilemapBuffer[32 * (v5 + 2) + v4 + 15] = v2;
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 <= 0xD );
  }
  return v7;
}
