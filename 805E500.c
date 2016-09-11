signed int __fastcall MoveFieldObjectInNextDirectionInSequence(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  int v5; // r7@1
  _BYTE *v6; // r5@4
  int v7; // r6@4
  int v8; // r0@4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(_BYTE *)(a1 + 33) == 3 && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 16) )
    *(_BYTE *)(a1 + 33) = 0;
  v6 = (_BYTE *)(a1 + 33);
  FieldObjectSetDirection(a1, *(_BYTE *)(a3 + *(_BYTE *)(a1 + 33)));
  v7 = (unsigned __int8)GetGoSpeed0AnimId((unsigned int)*(_BYTE *)(v3 + 24) >> 4);
  v8 = (unsigned __int8)sub_805FF20(v3, (unsigned int)*(_BYTE *)(v3 + 24) >> 4);
  if ( v8 == 1 )
  {
    FieldObjectSetDirection(v3, *(_BYTE *)(v5 + ++*v6));
    v7 = (unsigned __int8)GetGoSpeed0AnimId((unsigned int)*(_BYTE *)(v3 + 24) >> 4);
    v8 = (unsigned __int8)sub_805FF20(v3, (unsigned int)*(_BYTE *)(v3 + 24) >> 4);
  }
  if ( v8 )
    v7 = GetStepInPlaceDelay16AnimId(*(_BYTE *)(v3 + 24) & 0xF) & 0xFF;
  FieldObjectSetRegularAnim(v3, v4, v7);
  *(_BYTE *)v3 |= 2u;
  *(_WORD *)(v4 + 48) = 2;
  return 1;
}
