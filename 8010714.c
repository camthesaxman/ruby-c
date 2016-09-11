int __fastcall dp11b_obj_free(unsigned __int8 a1, char a2)
{
  char *v2; // r5@2
  char *v3; // r0@3
  int v4; // r4@3
  char v5; // r1@3
  char v6; // r0@3
  char *v7; // r0@5
  char *v8; // r1@6
  int v10; // [sp+8h] [bp-4h]@0

  if ( a2 == 1 )
  {
    v2 = (char *)(12 * a1 + 33650704);
    if ( *(_BYTE *)(12 * a1 + 0x2017810) & 2 )
    {
      v3 = &gSprites[68 * *(_BYTE *)(12 * a1 + 0x2017812)];
      v4 = *((_WORD *)v3 + 26) & 0xFF;
      DestroySprite((int)v3);
      v5 = *v2;
      v6 = -3;
_0801078C:
      *v2 = v6 & v5;
      v8 = &gSprites[68 * v4];
      *((_WORD *)v8 + 18) = 0;
      *((_WORD *)v8 + 19) = 0;
      return v10;
    }
  }
  else
  {
    v2 = (char *)(12 * a1 + 33650704);
    if ( *(_BYTE *)(12 * a1 + 0x2017810) & 4 )
    {
      v7 = &gSprites[68 * *(_BYTE *)(12 * a1 + 0x2017813)];
      v4 = *((_WORD *)v7 + 26) & 0xFF;
      DestroySprite((int)v7);
      v5 = *v2;
      v6 = -5;
      goto _0801078C;
    }
  }
  return v10;
}
