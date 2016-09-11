int __fastcall sub_812AF98(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r5@1
  char v3; // r6@1
  __int16 v4; // r0@1
  __int16 v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 6);
  v3 = *((_BYTE *)v1 + 16);
  v4 = *((_WORD *)v1 + 15) + 1;
  *((_WORD *)v1 + 15) = v4;
  if ( v4 == 111 )
  {
    *((_WORD *)v1 + 14) = 5;
    *((_WORD *)v1 + 15) = 0;
    *v1 = (int)sub_812B004;
  }
  else
  {
    v5 = *((_WORD *)v1 + 14) + 1;
    *((_WORD *)v1 + 14) = v5;
    if ( v5 == 11 )
    {
      *((_WORD *)v1 + 14) = 0;
      audio_play_and_stuff(*((_WORD *)v1 + 4), v2);
    }
    *((_WORD *)v1 + 6) = sub_8077104((signed __int16)(v2 + v3));
  }
  return v7;
}
