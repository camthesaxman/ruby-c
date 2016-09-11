signed int __fastcall sub_8025E20(int a1, unsigned __int8 a2, char a3, int a4)
{
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r7@1
  signed int v7; // r9@1
  signed int v8; // r10@1
  _BYTE *v9; // r1@2
  int v10; // r5@8
  int v12; // r0@21
  signed int v13; // r0@41
  signed int v14; // r2@41
  int v15; // r6@41
  int v16; // r2@43
  char v17; // r1@44
  signed int v18; // r2@47
  int v19; // r2@49
  char v20; // r1@51
  _BYTE *v21; // r1@54
  _BYTE *v22; // r1@56

  v4 = a4;
  v5 = (unsigned __int8)a1;
  v6 = a2;
  v7 = 0;
  v8 = 0;
  if ( a3 & 0x40 )
    v9 = (_BYTE *)33704967;
  else
    v9 = (_BYTE *)33704968;
  v2024A60 = *v9;
  if ( a3 & 0x80 )
    v7 = 1;
  if ( a3 & 0x20 )
    v8 = 1;
  v10 = a3 & 0x1F;
  byte_30041C0[0] = -3;
  byte_30041C1 = 5;
  LOBYTE(word_30041C2) = v6;
  HIBYTE(word_30041C2) = -1;
  if ( a1 & 0x80 )
  {
    if ( !*(_BYTE *)(12 * (battle_get_per_side_status(v2024A60) & 1) + 0x2024C82) || v7 )
    {
      if ( v2024BE6 != 174 && v8 != 1 && sub_801C108(0) << 24 )
      {
        v2024C10 = &BattleScript_1D83D6;
        return 1;
      }
    }
    else if ( v2024BE6 != 174 )
    {
      if ( v10 == 1 )
      {
        if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) << 31 )
        {
          v2024C10 = v4;
        }
        else
        {
          b_movescr_stack_push(v4);
          v2016003 = v2024A60;
          v2024C10 = &gUnknown_081D9128;
          *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 1u;
        }
      }
      return 1;
    }
    v12 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
    if ( (v12 == 29 || v12 == 73) && !v7 && v2024BE6 != 174 )
    {
      if ( v10 == 1 )
      {
        if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) << 31 )
        {
          v2024C10 = v4;
        }
        else
        {
          b_movescr_stack_push(v4);
          v2016003 = v2024A60;
          v2024C10 = &gUnknown_081D989B;
          v2024C06 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
          sub_81074C4(v2024A60, v2024C06);
          *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 1u;
        }
      }
      return 1;
    }
    if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 51 && !v7 && v6 == 6 )
    {
      if ( v10 == 1 )
      {
        b_movescr_stack_push(v4);
        v2016003 = v2024A60;
        v2024C10 = &gUnknown_081D9903;
        v2024C06 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
        sub_81074C4(v2024A60, v2024C06);
      }
      return 1;
    }
    if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 52 && !v7 && v6 == 1 )
    {
      if ( v10 == 1 )
      {
        b_movescr_stack_push(v4);
        v2016003 = v2024A60;
        v2024C10 = &gUnknown_081D9903;
        v2024C06 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
        sub_81074C4(v2024A60, v2024C06);
      }
      return 1;
    }
    if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) != 19 || v10 )
    {
      v13 = -16777216 * ((v5 << 24 >> 28) & 7);
      byte_3004290[0] = -3;
      v14 = 1;
      v15 = 255 * ((v5 << 24 >> 28) & 7) & 0xFF;
      if ( v13 >> 24 == -2 )
      {
        byte_3004291 = 0;
        word_3004292 = 211;
        v14 = 4;
      }
      byte_3004290[v14] = 0;
      v16 = v14 + 1;
      byte_3004290[v16++] = -44;
      byte_3004290[v16] = 0;
      byte_3004290[v16 + 1] = -1;
      if ( *(_BYTE *)(v6 + 88 * v2024A60 + 33704600) )
      {
        v17 = 0;
        if ( v2024C08 == v2024A60 )
          v17 = 1;
        v2024D23 = v17;
        goto _08026234;
      }
_08026206:
      v2024D23 = 2;
      goto _08026234;
    }
    return 1;
  }
  v15 = (a1 << 24 >> 28) & 7;
  byte_3004290[0] = -3;
  v18 = 1;
  if ( v15 == 2 )
  {
    byte_3004291 = 0;
    word_3004292 = 209;
    v18 = 4;
  }
  byte_3004290[v18] = 0;
  v19 = v18 + 1;
  byte_3004290[v19++] = -46;
  byte_3004290[v19] = 0;
  byte_3004290[v19 + 1];
  byte_3004290[v19 + 1] = -1;
  if ( *(_BYTE *)(v6 + 88 * v2024A60 + 33704600) == 12 )
    goto _08026206;
  v20 = 0;
  if ( v2024C08 == v2024A60 )
    v20 = 1;
  v2024D23 = v20;
_08026234:
  *(_BYTE *)(v6 + 88 * v2024A60 + 33704600) += v15;
  v21 = (_BYTE *)(v6 + 88 * v2024A60 + 33704600);
  if ( (signed int)*v21 < 0 )
    *v21 = 0;
  v22 = (_BYTE *)(v6 + 88 * v2024A60 + 33704600);
  if ( (signed int)*v22 > 12 )
    *v22 = 12;
  if ( v2024D23 == 2 )
  {
    if ( v10 & 1 )
      v2024C68 |= 1u;
    if ( v2024D23 == 2 && !(v10 & 1) )
      return 1;
  }
  return 0;
}
