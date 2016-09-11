int __fastcall sub_809F134(unsigned __int8 a1, char a2, int a3)
{
  unsigned __int8 v3; // r6@1
  int v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  LOBYTE(v4) = a2;
  if ( !GetMonData(33652752, 45, a3) )
  {
    v4 = (char)v4;
    if ( ((char)v4 != -1 || v201800B != v2018075)
      && (v4 != 1 || v201800B != v2018076)
      && (unsigned __int8)FindTaskIdByFunc((int)sub_80A1334) == 255
      && (unsigned __int8)FindTaskIdByFunc((int)sub_80A1500) == 255 )
    {
      audio_play(5u);
      sub_809F0D0(v3, v4);
    }
  }
  return v6;
}
