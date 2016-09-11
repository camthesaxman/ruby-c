signed int __fastcall sub_805E40C(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  char v4; // r0@3
  int v5; // r5@4
  int v6; // r6@4
  char v7; // r0@5

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 33) && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 33) = 0;
    v4 = GetOppositeDirection((unsigned int)*(_BYTE *)(a1 + 24) >> 4);
    FieldObjectSetDirection(v2, v4);
  }
  v5 = (unsigned __int8)sub_805FF20(v2, (unsigned int)*(_BYTE *)(v2 + 24) >> 4);
  v6 = (unsigned __int8)GetGoSpeed0AnimId((unsigned int)*(_BYTE *)(v2 + 24) >> 4);
  if ( v5 == 1 )
  {
    ++*(_BYTE *)(v2 + 33);
    v7 = GetOppositeDirection((unsigned int)*(_BYTE *)(v2 + 24) >> 4);
    FieldObjectSetDirection(v2, v7);
    v6 = (unsigned __int8)GetGoSpeed0AnimId((unsigned int)*(_BYTE *)(v2 + 24) >> 4);
    v5 = sub_805FF20(v2, (unsigned int)*(_BYTE *)(v2 + 24) >> 4) & 0xFF;
  }
  if ( v5 )
    v6 = GetStepInPlaceDelay16AnimId(*(_BYTE *)(v2 + 24) & 0xF) & 0xFF;
  FieldObjectSetRegularAnim(v2, v3, v6);
  *(_BYTE *)v2 |= 2u;
  *(_WORD *)(v3 + 48) = 3;
  return 1;
}
