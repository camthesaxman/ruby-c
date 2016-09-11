int __fastcall sub_809F1B8(unsigned __int8 a1, char a2)
{
  int v2; // r6@1
  char v3; // r4@1
  unsigned int v4; // r4@3
  char v5; // r0@6
  char v6; // r4@11
  int *v7; // r0@14
  int v9; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( v201800E == 1 )
  {
    if ( v201800B )
    {
      v4 = (-(a2 ^ 1) | a2 ^ 1u) >> 31;
    }
    else
    {
      LOBYTE(v4) = 3;
      if ( a2 == 1 )
        LOBYTE(v4) = 2;
    }
    v5 = sub_8095DCC(v2018000, v2018009, v201800A, v4);
  }
  else if ( (sub_80F9344() & 0xFF) != 1 || (unsigned __int8)sub_806B528() != 1 )
  {
    v5 = sub_809F284(v3);
  }
  else
  {
    v5 = sub_809F3CC(v3);
  }
  v6 = v5;
  if ( v5 != -1 )
  {
    audio_play(5u);
    if ( sub_80A1CD8(33652752) << 24 )
      sub_80A12D0(-2);
    v2018009 = v6;
    v7 = &dword_3004B20[10 * v2];
    v2018084 = *v7;
    *v7 = (int)sub_809F43C;
  }
  return v9;
}
