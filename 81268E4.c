int __fastcall npc_pal_op(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int v6; // [sp+0h] [bp-14h]@1
  int v7; // [sp+10h] [bp-4h]@6

  v2 = a1;
  v3 = a2;
  memcpy(&v6, (const char *)&gUnknown_08401E2C, 6);
  *(_WORD *)(v3 + 50) = 0;
  if ( !(*(_BYTE *)(GetFieldObjectGraphicsInfo(*(_BYTE *)(v2 + 5)) + 12) & 0x80)
    && ((v4 = (unsigned __int8)sub_8057450(*(_BYTE *)(v2 + 31))) != 0
     || (v4 = (unsigned __int8)sub_8057450(*(_BYTE *)(v2 + 30))) != 0) )
  {
    *(_WORD *)(v3 + 50) = *((_WORD *)&v6 + v4 - 1);
    npc_pal_op_A(v2, (unsigned int)*(_BYTE *)(v3 + 5) >> 4);
  }
  else
  {
    npc_pal_op_B(v2, (unsigned int)*(_BYTE *)(v3 + 5) >> 4);
  }
  return v7;
}
