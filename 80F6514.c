int __fastcall sub_80F6514(_BYTE *a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r10@1
  _BYTE *v4; // r5@1
  int v5; // r6@1
  int v6; // r8@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r2@2
  unsigned __int16 v10; // r9@2
  unsigned __int8 v11; // r0@3
  unsigned __int8 v12; // r0@4
  signed int v13; // r4@5
  int v14; // r5@7
  int v15; // r5@7
  char v16; // r0@10
  int v17; // r5@13
  _BYTE *v18; // r5@13
  int v20; // [sp+0h] [bp-2Ch]@1
  int v21; // [sp+4h] [bp-28h]@1
  signed int v22; // [sp+8h] [bp-24h]@3

  v3 = (int)a1;
  v20 = a2;
  v21 = a3;
  v4 = a1;
  v5 = *(_BYTE *)(4 * a2 + 0x200893D);
  v6 = *(_BYTE *)(4 * a2 + 0x200893D);
  v7 = *(_BYTE *)(4 * a2 + 0x200893E) & 0x1F;
  v8 = *(_BYTE *)(4 * a2 + 0x200893E) & 0x1F;
  if ( sub_80F44B0(v5, *(_BYTE *)(4 * a2 + 0x200893E) & 0x1F, 45, 0) )
    goto _080F66CA;
  sub_80F44B0(v5, v7, 2, v4);
  StringGetEnd10((int)v4);
  v10 = sub_80F44B0(v5, v7, 11, 0);
  if ( v5 == 14 )
  {
    v22 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v7], 56, v9);
    v11 = GetMonGender();
  }
  else
  {
    v22 = (unsigned __int8)GetLevelFromBoxMonExp(2400 * v6 + 80 * v8 + 33751204);
    v12 = sub_80F44B0(v6, v8, 0, 0);
    v11 = GetGenderFromSpeciesAndPersonality(v10, v12);
  }
  v13 = v11;
  if ( sub_8040D8C(v10, v3) )
    v13 = 255;
  v14 = (int)&v4[(unsigned __int16)StringLength(v4)];
  *(_BYTE *)v14 = -4;
  *(_BYTE *)(v14 + 1) = 19;
  *(_BYTE *)(v14 + 2) = 63;
  v15 = v14 + 3;
  if ( !v13 )
  {
    *(_BYTE *)v15 = -4;
    *(_BYTE *)(v15 + 1) = 1;
    *(_BYTE *)(v15 + 2) = 12;
    *(_BYTE *)(v15 + 3) = -4;
    *(_BYTE *)(v15 + 4) = 3;
    *(_BYTE *)(v15 + 5) = 13;
    v16 = -75;
_080F6652:
    *(_BYTE *)(v15 + 6) = v16;
    v15 += 7;
    goto _080F6656;
  }
  if ( v13 == 254 )
  {
    *(_BYTE *)v15 = -4;
    *(_BYTE *)(v15 + 1) = 1;
    *(_BYTE *)(v15 + 2) = 10;
    *(_BYTE *)(v15 + 3) = -4;
    *(_BYTE *)(v15 + 4) = 3;
    *(_BYTE *)(v15 + 5) = 11;
    v16 = -74;
    goto _080F6652;
  }
_080F6656:
  *(_BYTE *)v15 = -4;
  *(_BYTE *)(v15 + 1) = 1;
  *(_BYTE *)(v15 + 2) = 1;
  *(_BYTE *)(v15 + 3) = -4;
  *(_BYTE *)(v15 + 4) = 3;
  *(_BYTE *)(v15 + 5) = 5;
  v17 = v15 + 6;
  *(_BYTE *)v17 = -4;
  *(_BYTE *)(v17 + 1) = 19;
  *(_BYTE *)(v17 + 2) = 70;
  v17 += 3;
  *(_BYTE *)v17 = -70;
  *(_BYTE *)(v17 + 1) = -4;
  *(_BYTE *)(v17 + 2) = 17;
  *(_BYTE *)(v17 + 3) = 1;
  *(_BYTE *)(v17 + 4) = 52;
  v18 = ConvertIntToDecimalString((_BYTE *)(v17 + 5), v22);
  if ( v21 != 1 )
  {
    *v18 = -4;
    v18[1] = 19;
    v18[2] = 103;
    v4 = v18 + 3;
_080F66CA:
    *v4 = -1;
    return (int)v4;
  }
  return sub_8072C14((int)v18, *(_BYTE *)(4 * v20 + 0x200893C), 0x80u, 1u);
}
