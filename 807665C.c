int ma0B_0807324C()
{
  unsigned int v0; // r4@1
  signed int v1; // r0@7
  int v2; // r5@9
  char *v3; // r0@10
  char *v4; // r0@13
  int *v5; // r1@15
  int v7; // [sp+8h] [bp-4h]@0

  ++v202F7A4;
  v0 = *v202F7A4;
  if ( *v202F7A4 )
  {
    if ( v0 == 1 )
      v0 = 3;
    if ( !v0 )
      goto _08076682;
  }
  else
  {
    v0 = 2;
  }
  if ( v0 == 2 )
  {
_08076682:
    v1 = 33748936;
    goto _0807668E;
  }
  v1 = 33748937;
_0807668E:
  v2 = *(_BYTE *)v1;
  if ( v202F7C2 != 255 )
  {
    v3 = &gSprites[68 * *(_BYTE *)(*(_BYTE *)v1 + 0x2024BE0) + 62];
    *v3 &= 0xFBu;
  }
  if ( v0 <= 1 || v202F7C3 == 255 )
  {
    LOWORD(v0) = 0;
  }
  else
  {
    v4 = &gSprites[68 * *(_BYTE *)((v2 ^ 2) + 0x2024BE0) + 62];
    *v4 &= 0xFBu;
  }
  v5 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_807672C, 5)];
  *((_WORD *)v5 + 4) = v0;
  *((_WORD *)v5 + 6) = v2;
  ++v202F7A4;
  return v7;
}
