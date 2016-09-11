int sub_8093174()
{
  int v0; // r0@3
  int v1; // r0@6
  int v2; // r0@13
  int v3; // r0@13
  int v5; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 8u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v0 = sub_8093534();
        sub_8093688(v0);
        goto _0809320A;
      case 1:
        sub_8093598();
        goto _0809320A;
      case 2:
        sub_80935EC();
        goto _0809320A;
      case 3:
        v1 = sub_8093610();
        sub_80937A4(v1);
        goto _0809320A;
      case 4:
        sub_80937BC();
        ++byte_3001BAC;
        goto _080931EC;
      case 5:
_080931EC:
        if ( MultistepInitMenuWindowContinue() )
          goto _0809320A;
        return v5;
      case 6:
        sub_80937F0();
        goto _0809320A;
      case 7:
        sub_80937D8();
_0809320A:
        ++byte_3001BAC;
        break;
      case 8:
        v2 = nullsub_15();
        v3 = sub_8093800(v2);
        sub_8093550(v3);
        SetMainCallback2((int)sub_809323C);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
