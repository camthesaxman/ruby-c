int __fastcall sub_8082A90(_WORD *a1, unsigned __int16 a2)
{
  _WORD *v2; // r4@1
  signed int v3; // r1@1
  int result; // r0@2
  int v5; // r7@5
  signed int v6; // r6@5
  int v7; // r5@5
  _WORD *v8; // r4@5

  v2 = a1;
  v3 = sub_8082894(a1, a2);
  if ( v3 == -1 )
  {
    result = 0;
  }
  else
  {
    v5 = (int)&v2[8 * v3];
    v6 = 1;
    v7 = v5 + 2;
    v8 = (_WORD *)(v5 + 2);
    do
    {
      if ( !*v8 )
        return *(_WORD *)(v5 + 2 * (v6 - 1));
      if ( !(trainer_flag_check(*v8) << 24) )
        return *(_WORD *)v7;
      ++v8;
      v7 += 2;
      ++v6;
    }
    while ( v6 <= 4 );
    result = *(_WORD *)(v5 + 8);
  }
  return result;
}
