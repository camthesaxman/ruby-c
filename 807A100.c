int __fastcall sub_807A100(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r8@1
  unsigned int v3; // r9@1
  unsigned int v4; // r7@3
  int v5; // r2@3
  unsigned int v6; // r0@6
  int v7; // r0@7
  int v8; // r1@9
  _BYTE *v9; // r0@9
  unsigned int v10; // r7@15
  int v11; // r2@15
  int v12; // r2@15
  unsigned int v13; // r0@18
  int v14; // r0@19
  _BYTE *v15; // r4@23
  unsigned int v16; // r7@26
  int v17; // r2@26
  int v18; // r2@26
  unsigned int v19; // r0@29
  int v20; // r0@30
  int result; // r0@42
  int v22; // r0@44
  unsigned int v23; // r1@44
  int v24; // r0@45
  unsigned int v25; // r1@45

  v2 = a1;
  v3 = a2;
  if ( !(sub_8076BE0() << 24) )
  {
    if ( !(battle_side_get_owner(v2) << 24) )
    {
      if ( *(_WORD *)(4 * v2 + 0x2017802) )
      {
        v10 = *(_WORD *)(4 * v2 + 0x2017802);
        v12 = *(_DWORD *)(4 * v2 + 0x2024E70);
      }
      else
      {
        v10 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)], 11, 4 * v2);
        v12 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)], 0, v11);
      }
      if ( v10 == 201 )
      {
        v13 = (((v12 & 0x3000000u) >> 18) | ((v12 & 0x30000u) >> 12) | ((v12 & 0x300u) >> 6) | v12 & 3) % 0x1C & 0xFFFF;
        if ( v13 )
          v14 = (v13 + 412) & 0xFFFF;
        else
          v14 = 201;
        v8 = 4 * v14;
        v9 = gMonBackPicCoords;
        goto _0807A33C;
      }
      if ( v10 <= 0x19C )
      {
        v8 = 4 * v10;
        v9 = gMonBackPicCoords;
        goto _0807A33C;
      }
_0807A258:
      v15 = gMonBackPicCoords;
      goto _0807A33E;
    }
    if ( *(_WORD *)(4 * v2 + 0x2017802) )
    {
      v16 = *(_WORD *)(4 * v2 + 0x2017802);
      v18 = *(_DWORD *)(4 * v2 + 0x2024E70);
    }
    else
    {
      v16 = (unsigned __int16)GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 11, 4 * v2);
      v18 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 0, v17);
    }
    if ( v16 == 201 )
    {
      v19 = (((v18 & 0x3000000u) >> 18) | ((v18 & 0x30000u) >> 12) | ((v18 & 0x300u) >> 6) | v18 & 3) % 0x1C & 0xFFFF;
      if ( v19 )
        v20 = (v19 + 412) & 0xFFFF;
      else
        v20 = 201;
      v8 = 4 * v20;
    }
    else
    {
      if ( v16 == 385 )
        goto _0807A30C;
      if ( v16 > 0x19C )
      {
        v15 = gMonFrontPicCoords;
        goto _0807A33E;
      }
      v8 = 4 * v16;
    }
    v9 = gMonFrontPicCoords;
    goto _0807A33C;
  }
  if ( v201934C & 1 )
  {
    v4 = v201934A;
    v5 = v2019358;
  }
  else
  {
    v4 = v2019348;
    v5 = v2019350;
  }
  if ( v4 == 201 )
  {
    v6 = (((v5 & 0x3000000u) >> 18) | ((v5 & 0x30000u) >> 12) | ((v5 & 0x300u) >> 6) | v5 & 3) % 0x1C & 0xFFFF;
    if ( v6 )
      v7 = (v6 + 412) & 0xFFFF;
    else
      v7 = 201;
    v8 = 4 * v7;
    v9 = gMonBackPicCoords;
    goto _0807A33C;
  }
  if ( v4 == 385 )
  {
_0807A30C:
    v15 = &gUnknownCastformCoords_0837F598[4 * *(_BYTE *)(v2 + 33705604)];
    goto _0807A33E;
  }
  if ( v4 > 0x19C )
    goto _0807A258;
  v8 = 4 * v4;
  v9 = gMonBackPicCoords;
_0807A33C:
  v15 = &v9[v8];
_0807A33E:
  if ( v3 > 6 )
  {
def_807A34C:
    result = 0;
  }
  else
  {
    switch ( v3 )
    {
      case 0u:
        return 8 * (*v15 & 0xF);
      case 1u:
        return 8 * ((unsigned int)*v15 >> 4);
      case 4u:
        v22 = (unsigned __int8)sub_8077ABC(v2, 2u);
        v23 = (unsigned int)*v15 >> 4;
        goto _0807A3BC;
      case 5u:
        v24 = (unsigned __int8)sub_8077ABC(v2, 2u);
        v25 = (unsigned int)*v15 >> 4;
        goto _0807A3D4;
      case 2u:
        v22 = (unsigned __int8)sub_8077ABC(v2, 3u);
        v23 = *v15 & 0xF;
_0807A3BC:
        result = v22 - 4 * v23;
        break;
      case 3u:
        v24 = (unsigned __int8)sub_8077ABC(v2, 3u);
        v25 = *v15 & 0xF;
_0807A3D4:
        result = v24 + 4 * v25;
        break;
      case 6u:
        result = (unsigned __int8)sub_8077ABC(v2, 1u) + 31 - v15[1];
        break;
      default:
        goto def_807A34C;
    }
  }
  return result;
}
