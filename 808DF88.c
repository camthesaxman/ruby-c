int __fastcall sub_808DF88(__int16 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // r2@4
  signed __int16 v6; // [sp+0h] [bp-14h]@2
  signed __int16 v7; // [sp+2h] [bp-12h]@2
  int v8; // [sp+10h] [bp-4h]@0

  a4 = (unsigned __int16)a4;
  if ( a1 )
  {
    v6 = 1022;
    v7 = 1023;
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v4 = 2 * a2 + (a4 << 11) + (a3 << 6);
  *(_WORD *)(v4 + 100663296) = v6;
  *(_WORD *)(v4 + 100663360) = v7;
  return v8;
}
