int __fastcall sub_80AA8A0(int a1, char a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( a2 == 1 )
  {
    *(_WORD *)(a1 + 50) = a3;
    sub_80AA280(a3);
    sub_80AA658(*(_BYTE *)(v3 + 50));
  }
  return v5;
}
