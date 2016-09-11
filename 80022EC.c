int __fastcall LoadSpriteSheets(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( *a1 )
  {
    do
    {
      LoadSpriteSheet((int)&v1[2 * v2]);
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v1[2 * v2] );
  }
  return v4;
}
