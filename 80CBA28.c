int __fastcall sub_80CBA28(int a1)
{
  int v1; // r5@1
  __int16 v2; // r6@1
  int (__fastcall *v3)(int); // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u);
  if ( (unsigned __int8)battle_side_get_owner(v202F7C9) )
  {
    *(_WORD *)(v1 + 58) = 255;
    *(_WORD *)(v1 + 60) = v2 + 10;
    if ( sub_8076BE0() << 24 )
      *(_WORD *)(v1 + 58) = 0;
    sub_80CB7EC(v1, 40);
    *(_WORD *)(v1 + 52) = 3;
    *(_WORD *)(v1 + 54) = 60;
    v3 = sub_80CB9C4;
  }
  else
  {
    *(_WORD *)(v1 + 58) = 0;
    *(_WORD *)(v1 + 60) = v2 + 10;
    sub_80CB7EC(v1, 40);
    *(_WORD *)(v1 + 52) = 3;
    *(_WORD *)(v1 + 54) = 60;
    v3 = sub_80CB8E8;
  }
  *(_DWORD *)(v1 + 28) = v3;
  return v5;
}
