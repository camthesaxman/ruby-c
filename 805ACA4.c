signed int __fastcall InitFieldObjectStateFromTemplate(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  _BYTE *v3; // r5@1
  unsigned __int8 v4; // r6@1
  unsigned __int8 v5; // r7@1
  signed int result; // r0@2
  int *v7; // r4@3
  int v8; // r3@3
  int v9; // r2@3
  char v10; // r0@3
  char v11; // r0@3
  unsigned __int8 v12; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( GetAvailableFieldObjectSlot(*a1, a2, a3, &v12) << 24 )
  {
    result = 16;
  }
  else
  {
    v7 = &dword_30048A0[9 * v12];
    npc_clear_ids_and_state((int)v7);
    v8 = (*((_WORD *)v3 + 2) + 7) & 0xFFFF;
    v9 = (*((_WORD *)v3 + 3) + 7) & 0xFFFF;
    *(_BYTE *)v7 |= 5u;
    *((_BYTE *)v7 + 5) = v3[1];
    *((_BYTE *)v7 + 6) = v3[9];
    *((_BYTE *)v7 + 8) = *v3;
    *((_BYTE *)v7 + 9) = v4;
    *((_BYTE *)v7 + 10) = v5;
    *((_WORD *)v7 + 6) = v8;
    *((_WORD *)v7 + 7) = v9;
    *((_WORD *)v7 + 8) = v8;
    *((_WORD *)v7 + 9) = v9;
    *((_WORD *)v7 + 10) = v8;
    *((_WORD *)v7 + 11) = v9;
    v10 = *((_BYTE *)v7 + 11) & 0xF0 | v3[8] & 0xF;
    *((_BYTE *)v7 + 11) = v10;
    *((_BYTE *)v7 + 11) = v10 & 0xF | 16 * v3[8];
    v11 = *((_BYTE *)v7 + 25) & 0xF0 | v3[10] & 0xF;
    *((_BYTE *)v7 + 25) = v11;
    *((_BYTE *)v7 + 25) = v11 & 0xF | 16 * (v3[10] >> 4);
    *((_BYTE *)v7 + 7) = *((_WORD *)v3 + 6);
    *((_BYTE *)v7 + 29) = *((_WORD *)v3 + 7);
    *((_BYTE *)v7 + 32) = gUnknown_0836DC09[v3[9]];
    FieldObjectSetDirection(v7, *((_BYTE *)v7 + 32));
    FieldObjectHandleDynamicGraphicsId(v7);
    if ( gUnknown_0836DBBC[*((_BYTE *)v7 + 6)] )
    {
      if ( !(*((_BYTE *)v7 + 25) & 0xF) )
        *((_BYTE *)v7 + 25) = *((_BYTE *)v7 + 25) & 0xF0 | ((*((_BYTE *)v7 + 25) & 0xF) + 1) & 0xF;
      if ( !(*((_BYTE *)v7 + 25) & 0xF0) )
        *((_BYTE *)v7 + 25) = *((_BYTE *)v7 + 25) & 0xF | 16 * ((*((_BYTE *)v7 + 25) >> 4) + 1);
    }
    result = v12;
  }
  return result;
}
