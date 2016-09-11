int __fastcall sub_8010384(int a1)
{
  int v1; // r9@1
  int v2; // r6@1
  unsigned int v3; // r4@2
  int v4; // r0@5
  unsigned int v5; // r0@5
  int v6; // r0@6
  char *v7; // r1@8
  int v8; // r0@8
  unsigned int v9; // r0@10
  char *v10; // r0@12
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) & 0xFF;
  if ( *(_WORD *)(4 * v2 + 0x2017802) )
    v3 = *(_WORD *)(4 * v2 + 0x2017802);
  else
    v3 = *(_WORD *)(a1 + 50);
  GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 0);
  if ( v3 == 201 )
  {
    v4 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 0);
    v5 = (((v4 & 0x3000000u) >> 18) | ((v4 & 0x30000u) >> 12) | ((v4 & 0x300u) >> 6) | v4 & 3) % 0x1C & 0xFFFF;
    if ( v5 )
      v6 = (v5 + 412) & 0xFFFF;
    else
      v6 = 201;
    v7 = (char *)&gMonFrontPicCoords;
    v8 = 4 * v6;
    goto _08010468;
  }
  if ( v3 != 385 )
  {
    if ( v3 > 0x19C )
    {
      v10 = (char *)&gMonFrontPicCoords;
_0801046A:
      v9 = (unsigned __int8)v10[1];
      goto _0801046C;
    }
    v7 = (char *)&gMonFrontPicCoords;
    v8 = 4 * v3;
_08010468:
    v10 = &v7[v8];
    goto _0801046A;
  }
  v9 = gUnknownCastformCoords_0837F598[4 * *(_BYTE *)(v2 + 33705604) + 1];
_0801046C:
  *(_WORD *)(v1 + 52) = 8 - (v9 >> 3);
  *(_WORD *)(v1 + 54) = 1;
  *(_DWORD *)(v1 + 28) = sub_8010494;
  return v12;
}
