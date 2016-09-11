int atk00_attackcanceler()
{
  void *v0; // r0@5
  int v1; // r2@15
  int v2; // r2@22
  _BYTE *v3; // r4@23
  int v4; // r3@23
  int v6; // [sp+1Ch] [bp-4h]@0

  if ( v2024D26 )
  {
    v2024A7F = 12;
    return v6;
  }
  if ( !*(_WORD *)(88 * v2024C07 + 0x2024AA8) && !(v2024C6C & 0x200) )
  {
    v2024C6C |= 0x80000u;
    v0 = &BattleScript_1D6F62;
    goto _0801BFF2;
  }
  if ( !(unsigned __int8)sub_8017718() && !(sub_8018324(2u, v2024C08, 0, 0, 0) << 24) )
  {
    if ( !*(_BYTE *)(v2024BE4 + 88 * v2024C07 + 0x2024AA4)
      && v2024BE6 != 165
      && !(v2024C6C & 0x800200)
      && !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x1000) )
    {
      v2024C10 = &gUnknown_081D936D;
      v2024C68 |= 1u;
      return v6;
    }
    v2024C6C &= 0xFF7FFFFF;
    if ( v2024C6C & 0x2000000
      || *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x1000
      || (v1 = (unsigned __int8)sub_801B928()) == 0 )
    {
      v2024C6C |= 0x2000000u;
      if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) & 0x10 && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 4 )
      {
        sub_80151D4(v2024C07, v2024C08, 277);
        *(_BYTE *)(16 * v2024C08 + 0x2024D28) &= 0xEFu;
        b_movescr_stack_push_cursor();
        v0 = &gUnknown_081D946F;
      }
      else
      {
        v2 = 0;
        if ( (signed int)v2024A68 <= 0 )
        {
_0801BE7E:
          if ( *(_BYTE *)(20 * v2024C08 + 0x2024D68) & 2 )
          {
            *(_BYTE *)(20 * v2024C08 + 0x2024D68) &= 0xFDu;
            v2024C06 = 31;
            b_movescr_stack_push_cursor();
            v2024C10 = &gUnknown_081D9812;
            sub_81074C4(v2024C08, v2024C06);
            return v6;
          }
          if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) << 31
            && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 2
            && (v2024BE6 != 174
             || *(_BYTE *)(88 * v2024C07 + 0x2024AA1) == 7
             || *(_BYTE *)(88 * v2024C07 + 0x2024AA2) == 7)
            && (!(sub_8028350(v2024BE6) << 24) || *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x1000) )
          {
            b_cancel_multi_turn_move_maybe(v2024C07);
            v2024C68 |= 1u;
            *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
            *(_WORD *)(2 * v2024C08 + 0x2024C44) = 0;
            v2024D24 = 1;
          }
          v0 = (void *)(v2024C10 + 1);
        }
        else
        {
          while ( 1 )
          {
            v3 = (_BYTE *)(v2 + 33704570);
            v4 = *(_BYTE *)(v2 + 33704570);
            if ( *(_BYTE *)(16 * v4 + 0x2024D28) & 0x20 )
            {
              if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 8 )
                break;
            }
            if ( ++v2 >= v2024A68 )
              goto _0801BE7E;
          }
          sub_80151D4(v2024C07, v4, 289);
          *(_BYTE *)(16 * *v3 + 0x2024D28) &= 0xDFu;
          v2016003 = *v3;
          b_movescr_stack_push_cursor();
          v0 = &gUnknown_081D9487;
        }
      }
_0801BFF2:
      v2024C10 = v0;
      return v6;
    }
    if ( v1 == 2 )
      v2024C6C |= 0x2000000u;
    else
      v2024C68 |= 1u;
  }
  return v6;
}
